#include <fstream>
using namespace std;

ifstream in("tramvaie.in");
ofstream out("tramvaie.out");

int main()
{
    int t, x, r, d;
    in >> t;
    for (int i = 0; i < t; i++)
    {
        in >> x;
        r = x;
        d = 2;
        while (x > 1)
        {
            if (x % d == 0)
            {
                r = r / d * (d - 1);
                while (x % d == 0)
                    x /= d;
            }
            d++;
            if (d * d > x)
                d = x;
        }
        out << r << " ";
    }
    return 0;
}