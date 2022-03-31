#include <fstream>

using namespace std;

int sp[1001][1001], mars[1002][1002], a[1001][1001], l1, c1, l2, c2, x, maxx, n, m, z, apar;

int main()
{
    ifstream in("flori1.in");
    ofstream out("flori1.out");
    in >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            in >> a[i][j];
    in >> z;
    for (int i = 1; i <= z; i++)
    {
        in >> l1 >> c1 >> l2 >> c2 >> x;
        mars[l1][c1] += x;
        mars[l2 + 1][c2 + 1] += x;
        mars[l2 + 1][c1] -= x;
        mars[l1][c2 + 1] -= x;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sp[i][j] = sp[i][j - 1] + sp[i - 1][j] - sp[i - 1][j - 1] + mars[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] += sp[i][j];
            if (a[i][j] > maxx)
            {
                maxx = a[i][j];
                apar = 1;
            }
            else
            {
                if (a[i][j] == maxx)
                    apar++;
            }
        }
    }
    out << maxx << " " << apar;
    return 0;
}