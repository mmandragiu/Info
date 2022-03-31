#include <fstream>
using namespace std;

ifstream in("cadouri2.in");
ofstream out("cadouri2.out");

int f[500001];

int main()
{
    unsigned long long int div = 1, n, x, p, d;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        d = 2;
        while (x > 1)
        {
            p = 0;
            while (x % d == 0)
            {
                p++;
                x /= d;
            }
            f[d] += p;
            d++;
            if (x > 1 && d > x)
                d = x;
        }
    }
    for (int i = 0; i <= 500000; i++)
    {
        if (f[i])
            div = (div * (f[i] + 1)) % 1000000007;
    }
    out << div;
}