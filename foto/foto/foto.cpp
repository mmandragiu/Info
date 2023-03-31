#include <fstream>

using namespace std;

int foto[105][105], n, m, pmax, p, f, h, hmax, c;

int main()
{
    ifstream in("foto1.in");
    ofstream out("foto1.out");
    in >> c >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            in >> foto[i][j];
    }
    for (int i = 0; i <= m + 1; i++)
        foto[0][i] = 1000000;
    for (int i = 1; i <= n + 1; i++)
        foto[i][m + 1] = 1000000;
    for (int i = m; i >= 0; i--)
        foto[n + 1][i] = 1000000;
    for (int i = n; i >= 0; i--)
        foto[i][0] = 1000000;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (foto[i][j] == 0)
                {
                    p = 0;
                    while (foto[i][j] == 0 && j <= m)
                    {
                        p++;
                        j++;
                    }
                    j--;
                    if (p > pmax)
                        pmax = p;
                }
            }
        }
        out << pmax;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (foto[i][j] == 1)
                {
                    foto[i][j] = 2;
                    h = 1;
                    f++;
                    int i1 = i, j1 = j;
                    bool ok = true;
                    while (ok)
                    {
                        if (foto[i1 + 1][j1 - 1] == 1)
                        {
                            i1++, j1--;
                            h++;
                            foto[i1][j1] = 2;
                        }
                        else
                        {
                            if (foto[i1 + 1][j1] == 1)
                            {
                                i1++;
                                h++;
                                foto[i1][j1] = 2;
                            }
                            else
                            {
                                if (foto[i1 + 1][j1 + 1] == 1)
                                {
                                    i1++, j1++;
                                    h++;
                                    foto[i1][j1] = 2;
                                }
                                else
                                    ok = false;
                            }
                        }
                    }
                    if (h > hmax)
                        hmax = h;
                }
            }
        }
        out << f << " " << hmax;
    }
    return 0;
}