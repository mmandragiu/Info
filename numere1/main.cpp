#include <fstream>
#include <cmath>
using namespace std;
ifstream in("numere1.in");
ofstream out("numere1.out");
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d <= sqrt(n))
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}
int AproapePrim(int n)
{
    int contor = 0;
    int copien = n;
    for (int d = 2; d * d <= copien; d++)
    {
        if (prim(d) == true && n % d == 0)
        {
            contor++;
            if (prim(n/d)==true && d < n/d)
            {
                contor++;
                n = 1;
            }
            else
                n = n / d;
        }
        if (contor == 2)
            break;
    }
    if (contor == 2)
        return n;
    else
        return 0;
}

int main()
{
    int n,x, gigel = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (AproapePrim(x) == 1 && x!=1)
            gigel++;
    }
    out << gigel;
    return 0;
}
