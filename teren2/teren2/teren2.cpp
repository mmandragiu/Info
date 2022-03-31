#include <fstream>

using namespace std;

long long a[181][181], n, m, t, r, c, x, y, z, u, cer1, cer2, cer3, p, randuri;

int main()
{
    ifstream in("teren2.in");
    ofstream out("teren2.out");
    in >> p >> n >> m >> t >> r >> c;
    for (int i = 1; i <= t; i++)
    {
        in >> x >> y >> z >> u;
        for (int j = x; j <= z; j++)
            for (int k = y; k <= u; k++)
                a[j][k]++;
    }
    if (p == 1)
        out << a[r][c];
    if (p == 2)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (a[i][j] > cer2)
                    cer2 = a[i][j];
        out << cer2;
    }
    if (p == 3)
    {
        for (int i = 1; i <= n - cer3; i++)
        {
            for (int j = 1; j <= m - cer3; j++)
            {
                if (a[i][j] == 0)
                {
                    randuri = 1;
                    bool ok = true;
                    while (ok)
                    {
                        x = z = randuri + i;
                        y = u = randuri + j;
                        if (x > n || y > m)
                            ok = false;
                        else
                        {
                            while (z >= i && ok)
                            {
                                if (a[x][u] + a[z][y] == 0)
                                {
                                    u--;
                                    z--;
                                }
                                else
                                    ok = 0;
                            }
                        }
                        if (ok == true)
                            randuri++;
                    }
                    if (randuri > cer3)
                        cer3 = randuri;
                }
            }
        }
        out << cer3 * cer3;
    }
    return 0;
}