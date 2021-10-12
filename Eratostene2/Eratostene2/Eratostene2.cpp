#include <fstream>
using namespace std;

ifstream in("eratostene2.in");
ofstream out("eratostene2.out");

int main()
{
    int n, x, d = 2, p = 0, factori_primi=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        factori_primi = 0;
        d = 2;
        while (x > 1)
        {
            p = 0;
            while (x % d == 0)
            {
                p++;
                x /= d;
            }
            if (p != 0)
                factori_primi++;
            d++;
            if (x > 1 && d * d > x)
                d = x;
        }
        out << factori_primi << " ";
    }
    return 0;
}