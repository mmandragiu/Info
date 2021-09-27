#include <fstream>
using namespace std;
ifstream in("numere4.in");
ofstream out("numere4.out");
bool prim(int n)
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
int prim3(int n)
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
        if (contor == 3)
            break;
    }
    if (contor == 3)
        return n;
    else
        return 0;
}

int main()
{
    int n,x, nr_prime3 = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (prim3(x) == 1 && x!=1)
            nr_prime3++;
    }
    out << nr_prime3;
}