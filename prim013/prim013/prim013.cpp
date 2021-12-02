#include <fstream>
using namespace std;

ifstream in("prim013.in");
ofstream out("prim013.out");

int NrDiv(int n)
{
    int d = 2, p, div = 1;
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            div = div * (p + 1);
        d++;
        if (n > 1 && d * d > n)
            d = n;
    }
    return div;
}

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int n, x, nr = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (x != 1 && Prim(NrDiv(x)) == true)
            nr++;
    }
    out << nr;
    return 0;
}