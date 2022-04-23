#include <fstream>
#include <cmath>
using namespace std;

ifstream in("treidiv.in");
ofstream out("treidiv.out");

int n, x, nr;
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
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if ((int)sqrt(x) == sqrt(x) && Prim((int)sqrt(x)) == true)
            nr++;
    }
    out << nr;
    return 0;
}