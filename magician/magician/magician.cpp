#include <fstream>
#include <algorithm>
using namespace std;
int n, k, m, p1, p2, poz;

int main()
{
    ifstream in("magician.in");
    ofstream out("magician.out");
    in >> n >> k >> m;
    poz = k;
    for (int i = 1; i <= m; i++)
    {
        in >> p1 >> p2;
        if (poz == p1)
        {
            poz = p2;
            continue;
        }
        if (poz == p2 && p1 > p2)
        {
            poz++;
            continue;
        }
        if (poz == p2 && p1 < p2)
        {
            poz--;
            continue;
        }
        if (p1 <= poz && poz < p2)
        {
            poz--;
            continue;
        }
        if (p2 <= poz && poz < p1)
        {
            poz++;
            continue;
        }
    }
    out << poz;
    return 0;
}