#include <fstream>
using namespace std;

int n, m, a[205][205], gropi = 0, transee = 0, c, i, j, d, g[201][201];


int main()
{
    ifstream in("lasere.in");
    ofstream out("lasere.out");
    in >> c >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            in >> a[i][j];
    for (int i = 0; i <= n + 1; i++)
        a[0][i] = 2000000000;
    for (int i = 0; i <= n + 1; i++)
        a[i][n + 1] = 2000000000;
    for (int i = n + 1; i >= 0; i--)
        a[n + 1][i] = 2000000000;
    for (int i = n + 1; i >= 0; i--)
        a[i][0] = 2000000000;
    for (int k = 1; k <= m; k++)
    {
        in >> i >> j >> d;
        if (d == 1)
        {
            for (int p = i - 1; p >= 1; p--)
                a[p][j]--;
        }
        if (d == 2)
        {
            for (int p = j + 1; p <= n; p++)
                a[i][p]--;
        }
        if (d == 3)
        {
            for (int p = i + 1; p <= n; p++)
                a[p][j]--;
        }
        if (d == 4)
        {
            for (int p = j - 1; p >= 1; p--)
                a[i][p]--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] <= a[i - 1][j - 1] && a[i][j] <= a[i - 1][j] && a[i][j] <= a[i - 1][j + 1] && a[i][j] <= a[i][j + 1] && a[i][j] <= a[i + 1][j + 1] && a[i][j] <= a[i + 1][j] && a[i][j] <= a[i + 1][j - 1] && a[i][j] <= a[i][j - 1])
            {
                gropi++;
                g[i][j] = 1;
            }
        }
    }
    if (c == 1)
        out << gropi;
    else
    {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
            {
                if (g[i][j] == 1 && g[i][j + 1] == 1 && j + 1 <= n)
                {
                    transee++;
                    while (j + 1 <= n && g[i][j + 1] == 1)
                        j++;
                }
            }
        }
        out << transee;
    }
    return 0;
}