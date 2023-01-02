#include <fstream>
using namespace std;

const unsigned long long NMAX = 1e3 + 5, valMAX = 1e6 + 5;
unsigned long long n, k, c, a[NMAX][NMAX], s[NMAX][NMAX], l1, c1, l2, c2, maxx, suma, xLinie[valMAX], xColoana[valMAX], linie[1005], coloana[1005], maxstalpi, nrmax;

int main()
{
    ifstream in("iluminat.in");
    ofstream out("iluminat.out");
    in >> c >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            in >> a[i][j];
            xLinie[a[i][j]] = i;
            xColoana[a[i][j]] = j;
        }
    }
    if (c == 1)
    {
        for (int i = 1; i <= k; i++)
        {
            for (int j = n * n; j >= 1; j--)
            {
                if (linie[xLinie[j]] == 0 && coloana[xColoana[j]] == 0)
                {
                    if (i == k)
                        maxstalpi = j;
                    linie[xLinie[j]] = 1;
                    coloana[xColoana[j]] = 1;
                    break;
                }
            }
        }
        out << maxstalpi;
    }
    if (c == 2)
    {
        for (int j = n * n; j >= 1; j--)
        {
            if (linie[xLinie[j]] == 0 && coloana[xColoana[j]] == 0)
            {
                k--;
                if (!k)
                {
                    nrmax = j;
                    break;
                }
                linie[xLinie[j]] = 1;
                coloana[xColoana[j]] = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == nrmax)
                {
                    for (int i1 = j; i1 >= 1; i1--)
                    {
                        if (linie[xLinie[nrmax]] == 0 && coloana[i1] == 0)
                            suma += a[i][i1];
                    }
                    for (int i1 = j; i1 <= n; i1++)
                    {
                        if (linie[xLinie[nrmax]] == 0 && coloana[i1] == 0)
                            suma += a[i][i1];
                    }
                    for (int i1 = 1; i1 <= i; i1++)
                    {
                        if (linie[i1] == 0 && coloana[xColoana[nrmax]] == 0)
                            suma += a[i1][j];
                    }
                    for (int i1 = i; i1 <= n; i1++)
                    {
                        if (linie[i1] == 0 && coloana[xColoana[nrmax]]==0)
                            suma += a[i1][j];
                    }
                }
            }
        }
        out << suma - 3 * nrmax;
    }
    if (c == 3)
    {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
            }
        }
        for (int i = 1; i <= n - k + 1; i++) {
            l2 = i + k - 1;
            l1 = l2 - k + 1;
            for (int j = 1; j <= n - k + 1; j++) {
                c2 = j + k - 1;
                c1 = c2 - k + 1;
                suma = s[l2][c2] - s[l1 - 1][c2] - s[l2][c1 - 1] + s[l1 - 1][c1 - 1];
                if (suma > maxx)
                    maxx = suma;
            }
        }
        out << maxx;
    }
}