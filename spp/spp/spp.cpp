#include <fstream>
using namespace std;

ifstream in("spp.in");
ofstream out("spp.out");

int suma_patrate_perf[1500001];

int main()
{
    unsigned long long x, p, q, st, dr, mij, y = -1;
    in >> q;
    for (unsigned long long i = 1; i <= 1500001; i++)
        suma_patrate_perf[i] = (unsigned long long) (suma_patrate_perf[i - 1] + i * i);
    for (unsigned long long i = 1; i <= q; i++)
    {
        in >> x >> p;
        unsigned long long st = x, dr = 1500001, mij;
        y = 0;
        while (st <= dr)
        {
            while (st <= dr)
            {
                mij = (st + dr) / 2;
                if (suma_patrate_perf[mij]-suma_patrate_perf[x-1] == p * p)
                {
                    y = mij;
                    break;
                }
                else
                {
                    if (suma_patrate_perf[mij] - suma_patrate_perf[x - 1] > p * p)
                        dr = mij - 1;
                    else
                        st = mij + 1;
                }
            }
        }
        if (y == 0)
            y = st;
        out << y << '\n';
    }
    return 0;
}