#include <fstream>
using namespace std;

int a[65][65], distrib[61], patrate, n, m, t, lmax;

int main()
{
    ifstream in("patratele.in");
    ofstream out("patratele.out");
    in >> n >> m >> t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            in >> a[i][j];
    }
    lmax = min(n, m);
    for (int l = 1; l <= lmax; l++)
    {
        for (int i = 1; i <= n - l + 1; i++)
        {
            for (int j = 1; j <= m - l + 1; j++)
            {
                bool complet1 = false, complet2 = false, complet3 = false, complet4 = false;
                for (int z = j; z <= j + l - 1; z++)
                {
                    if (a[i][z] % 2 == 1)
                        complet1 = true;
                    else
                    {
                        complet1 = false;
                        break;
                    }
                }
                for (int z = i; z <= i + l - 1; z++)
                {
                    if ((a[z][j + l - 1] / 2) % 2 == 1)
                        complet2 = true;
                    else
                    {
                        complet2 = false;
                        break;
                    }
                }
                for (int z = j + l - 1; z >= j; z--)
                {
                    if ((a[i + l - 1][z] / 4) % 2 == 1)
                        complet3 = true;
                    else
                    {
                        complet3 = false;
                        break;
                    }
                }
                for (int z = i + l - 1; z >= i; z--)
                {
                    if ((a[z][j] / 8) % 2 == 1)
                        complet4 = true;
                    else
                    {
                        complet4 = false;
                        break;
                    }
                }
                if (complet1 == true && complet2 == true && complet3 == true && complet4 == true)
                {
                    patrate++;
                    distrib[l]++;
                }
            }
        }
    }
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] % 2 == 1 && (a[i][j] / 8) % 2 == 1)
            {
                if (a[i][j] == 15)
                {
                    patrate++;
                    distrib[1]++;
                }
                int i1 = i + 1, j1 = j + 1;
                while (i1 <= n && j1 <= m)
                {
                    if ((a[i1][j] / 8) % 2 == 1 && (a[i1][j] / 4) % 2 == 1 && a[i][j1] % 2 == 1 && (a[i][j1] / 2) % 2 == 1 && (a[i1][j1] / 4) % 2 == 1 && (a[i1][j1] / 2) % 2 == 1)
                    {
                        patrate++;
                        distrib[i1 - i + 1]++;
                    }
                    i1++;
                    j1++;
                }
            }
        }
    }*/
    if (t == 1)
    {
        out << patrate;
    }
    if (t == 2)
    {
        for (int i = 1; i <= 60; i++)
        {
            if (distrib[i])
                out << i << " " << distrib[i] << endl;
        }
    }
}