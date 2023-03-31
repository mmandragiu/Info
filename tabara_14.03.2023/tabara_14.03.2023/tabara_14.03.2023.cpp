#include <fstream>
using namespace std;

int a[155][105], n, k, grupe[155], grupe_total;

int main()
{
    ifstream in("tabara.in");
    ofstream out("tabara.out");
    in >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
            in >> a[i][j];
    }
    grupe[1] = 1;
    grupe_total = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int i1 = 1; i1 <= n; i1++)
        {
            bool found = false;
            if (i != i1)
            {
                for (int j = 1; j <= k; j++)
                {
                    for (int j1 = 1; j1 <= k; j1++)
                    {
                        if (a[i][j] == a[i1][j1] && i != i1)
                        {
                            found = true;
                            break;
                        }
                    }
                    if (found)
                        break;
                }
            }
            if (found)
            {
                if (grupe[i] == 0 && grupe[i1] == 0)
                {
                    grupe_total++;
                    grupe[i] = grupe_total;
                    grupe[i1] = grupe_total;
                }
                else
                    grupe[i] = grupe[i1];
                break;
            }
            else
            {
                if (!found && i1 == n)
                {
                    grupe_total++;
                    grupe[i] = grupe_total;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= grupe_total; i++)
    {
        for (int i1 = 1; i1 <= 151; i1++)
            if (grupe[i1] == i)
                out << i1 << " ";
        out << endl;
    }
    return 0;
}