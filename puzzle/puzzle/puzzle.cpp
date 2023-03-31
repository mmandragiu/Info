#include <fstream>
using namespace std;

int n, v[100001], cifre, perechi;

int nrcif(int o)
{
    int cif = 0;
    while (o > 0)
    {
        cif++;
        o /= 10;
    }
    return cif;
}

int main()
{
    ifstream in("puzzle.in");
    ofstream out("puzzle.out");
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    cifre = nrcif(v[1]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int a = v[i], b = v[j];
            bool ok = true;
            while (a / 10 > 0)
            {
                if (a % 10 + b % 10 != (a / 10) % 10 + (b / 10) % 10)
                {
                    ok = false;
                    break;
                }
                a /= 10;
                b /= 10;
            }
            if (ok == true)
                perechi++;
        }
    }
    out << perechi;
    return 0;
}