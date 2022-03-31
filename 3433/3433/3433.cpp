#include <fstream>
using namespace std;

int Eratostene[1000000], f[1000];

int Forta(int n)
{
    int p, div = 1, d = 2;
    while (n > 1)
    {
        p = 0;
        if (Eratostene[d] == 1)
        {
            d++;
            continue;
        }
        while (n % d == 0)
        {
            n /= d;
            p++;
        }
        div = div * (p + 1);
        d++;
        if (Eratostene[d] == 1)
        {
            d++;
            continue;
        }
        if (n > 1 && d * d > n)
            d = n;
    }
    return div;
}

int main()
{
    ifstream in("forta.in");
    ofstream out("forta.out");
    Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i * i <= 1000000; i++)
        for (int j = 2; j <= 1000000 / i; i++)
            Eratostene[i * j] = 1;
    int n, x, forta_max = 1, lmax = 0, c, nmin = 2000000000;
    in >> c;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (Forta(x) > forta_max)
        {
            forta_max = Forta(x);
            nmin = x;
        }
        if (Forta(x) == forta_max)
        {
            if (x < nmin)
                nmin = x;
        }
        f[Forta(x)]++;
    }
    in.close();
    if (c == 1)
    {
        out << nmin;
    }
    else
    {
        for (int i = 0; i < 1000; i++)
        {
            if (f[Forta(i)] > lmax)
                lmax = f[Forta(i)];
        }
        out << lmax;
    }
    out.close();
    return 0;
}