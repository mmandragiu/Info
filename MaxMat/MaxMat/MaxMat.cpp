#include <fstream>
using namespace std;

ifstream in("maxmat.in");
ofstream out("maxmat.out");

int main()
{
    int a[25][25], valmax = -1001, indicecol = 0, n, m;
    in >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            in >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        valmax = -1001;
        for (int j = 0; j < m; j++) {
            if (a[i][j] > valmax)
            {
                valmax = a[i][j];
                indicecol = j;
            }
        }
        out << valmax << " " << indicecol + 1 << '\n';
    }
    return 0;
}