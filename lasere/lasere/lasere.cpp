#include <fstream>
using namespace std;

ifstream in("lasere.in");
ofstream out("lasere.out");

int main()
{
    int n, m, a[201][201], gropi = 0, transee = 0, c, i, j, d;
    in >> c >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            in >> a[i][j];
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
        if(d==)
    }
}