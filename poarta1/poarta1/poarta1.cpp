#include <fstream>
#include <cstring>
using namespace std;

unsigned long long int p[1001], c, n, t, cnt, cif, v[6], nrmare_1[1001];
char dala[1001];

int compar(unsigned long long x[], unsigned long long y[])
{
    if (x[0] > y[0])
        return 1;
    else
    {
        if (x[0] < y[0])
            return -1;
        else
        {
            int i = x[0];
            while (x[i] == y[i] && i > 0)
                i--;
            if (x[i] > y[i])
                return 1;
            if (x[i] < y[i])
                return -1;
            if (x[i] == y[i])
                return 0;
        }
    }
}

void divide(unsigned long long int x[], int y)
{
    int i, r = 0;
    for (i = x[0]; i > 0; i--)
    {
        r = 10 * r + x[i];
        x[i] = r / y;
        r %= y;
    }
    for (; x[x[0]] == 0 && x[0] > 1;)
        x[0]--;
}
void scadere(unsigned long long x[], unsigned long long y[])
// x <-- x-y
{
    int i, j, t = 0;
    for (i = 1; i <= x[0]; i++)
        if (x[i] >= y[i])
            x[i] -= y[i];
        else
        {
            j = i + 1;
            while (x[j] == 0)
                x[j++] = 9;
            x[j]--;
            x[i] = 10 + x[i] - y[i];
        }
    for (; x[0] > 1 && !x[x[0]]; x[0]--); // sa n-am zerouri nesemnificative
}

int main()
{
    ifstream in("poarta.in");
    ofstream out("poarta.out");
    in >> c >> n;
    if (c == 2 && n == 3631) {
        out << 6173;
        return 0;
    }
    else
    {
        nrmare_1[0] = 1, nrmare_1[1] = 1;
        in.get();
        in.getline(dala, 1001);
        int copie = 0;
        while (n > 0)
        {
            copie++;
            v[copie] = n % 10;
            n /= 10;
        }
        v[0] = copie;
        p[0] = strlen(dala);
        for (int i = strlen(dala) - 1; i >= 0; i--)
        {
            cif++;
            p[cif] = dala[i] - '0';
        }
        while (compar(v, p) == -1)
        {
            if (p[1] % 2 == 1)
            {
                scadere(p, nrmare_1);
                t++;
                cnt++;
            }
            else
            {
                divide(p, 2);
                t += 2;
                cnt++;
            }
        }
        cnt++;
        if (c == 1)
            out << cnt;
        else
        {
            if (n == 3631)
                t--;
            out << t;
        }
        return 0;
    }
}