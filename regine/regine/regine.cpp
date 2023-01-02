#include <fstream>
using namespace std;

int n, m, p, q, i, j, a[105][105], regine;

int main()
{
    ifstream in("regine.in");
    ofstream out("regine.out");
    in >> n >> m;
    for (int i1 = 1; i1 <= m; i1++)
    {
        in >> i >> j;
        a[i][j] = 1;
    }
    for (int i1 = 1; i1 <= n; i1++)
    {
        for (int j1 = 1; j1 <= n; j1++)
        {
            if (a[i1][j1] == 1)
            {
                regine = 0;
                int lin = i1, col = j1;
                while (lin >= 1)
                {
                    lin--;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                lin = i1;
                while (lin <= n)
                {
                    lin++;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }   
                }
                lin = i1;
                while (col >= 1)
                {
                    col--;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                col = j1;
                while (col <= n)
                {
                    col++;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                lin = i1, col = j1;
                while (lin >= 1 && col >= 1)
                {
                    lin--, col--;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                lin = i1, col = j1;
                while (lin >= 1 && col <= n)
                {
                    lin--, col++;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                lin = i1, col = j1;
                while (lin <= n && col <= n)
                {
                    lin++, col++;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                lin = i1, col = j1;
                while (lin <= n && col >= 1)
                {
                    lin++, col--;
                    if (a[lin][col] == 1)
                    {
                        regine++;
                        break;
                    }
                }
                if (regine > p)
                    p = regine, q = 1;
                else
                {
                    if (regine == p)
                        q++;
                }
            }
        }
    }
    out << p << " " << q;
    return 0;
}