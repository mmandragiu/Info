#include <fstream>
using namespace std;

int n, m, zid[255][255], frecv[15], lmax, l, cmax, liniemax, colmax, nr;

int main()
{
    ifstream in("zid.in");
    ofstream out("zid.out");
    in >> n >> m >> cmax;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            in >> zid[i][j];
    }
    l = min(n, m);
    for (int k = 1; k <= l; k++)
    {
        for (int i = 1; i <= n - k + 1; i++)
        {
            for (int j = 1; j <= m - k + 1; j++)
            {
                for (int p = 0; p <= 10; p++)
                    frecv[p] = 0;
                for (int i1 = i; i1 <= i + k - 1; i1++)
                {
                    for (int j1 = j; j1 <= j + k - 1; j1++)
                        frecv[zid[i1][j1]]++;
                }
                int ant_prev = 0;
                bool uniform = true;
                for (int p = 0; p <= 10; p++)
                {
                    if (frecv[p] != 0)
                    {
                        if (ant_prev == 0)
                            ant_prev = frecv[p];
                        else
                        {
                            if (frecv[p] != ant_prev)
                            {
                                uniform = false;
                                break;
                            }
                        }
                    }
                }
                if (uniform == true)
                {
                    if (k > lmax)
                    {
                        lmax = k;
                        nr = k * k;
                        liniemax = i;
                        colmax = j;
                    }
                }
            }
        }
    }
    out << nr << " " << liniemax << " " << colmax;
    return 0;
}