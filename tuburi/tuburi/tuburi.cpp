#include <fstream>
using namespace std;

int n, m, length_max, c, perete[505][505];

int main()
{
    ifstream in("tuburi.in");
    ofstream out("tuburi.out");
    in >> c >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            in >> perete[i][j];
    }
    if (c == 1)
    {
        for (int j = 1; j <= m; j++)
        {
            int i1 = 1, j1 = j;
            if (perete[i1][j1] == 2||perete[i1][j1]==4||perete[i1][j1]==6)
            {
                int length = 1;
                bool ok = false;
                while (i1 + 1 <= n && j1 + 1 <= m && j1 >= 0 && ok == true)
                {
                    if (perete[i1][j1] == 2)
                    {
                        if (perete[i1 + 1][j1] == 2 && i1 + 1 <= n)
                            i1++, ok = true;
                        if (perete[i1 + 1][j1] == 4 && i1 + 1 <= n)
                            i1++, ok = true;
                        if (perete[i1 + 1][j1] == 6 && i1 + 1 <= n)
                            i1++, ok = true;
                    }
                }
                length_max = length_max > length ? length : length_max;
            }
        }
    }
}