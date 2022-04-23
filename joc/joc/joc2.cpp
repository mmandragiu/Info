#include <fstream>
#include <cmath>
using namespace std;

int n, x, f[10], latura, jetoane, val, nr[10], maxx;

int main()
{
    ifstream in("joc2.in");
    ofstream out("joc2.out");
    in >> n;
    for (int i = 1; i <= 9; i++)
        nr[i] = i;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (x > maxx)
            maxx = x;
        f[x]++;
    }
    for (int i = 1; i < maxx; i++)
    {
        for (int j = i; j <= maxx; j++)
        {
            if (f[nr[i]] < f[nr[j]])
            {
                int aux = nr[i];
                nr[i] = nr[j];
                nr[j] = aux;
            }
        }
    }
    for (int i = 1; i <= 9; i++)
        if (f[i])
            jetoane++;
    latura = (int)sqrt(n);
    out << jetoane << '\n' << latura << '\n';
    int arie = latura * latura;
    while (arie)
    {
        for (int i = 1; i <= maxx; i++)
        {
            for (int j = 1; j <= f[nr[i]] && arie > 0; j++)
            {
                if (val < latura)
                {
                    out << nr[i];
                    val++;
                }
                else
                {
                    out << endl << nr[i];
                    val = 1;
                }
                arie--;
            }
        }
    }
}