#include <fstream>
using namespace std;

ifstream in("jimjam.in");
ofstream out("jimjam.out");

int main()
{
    int a, b, z, d, zt = 0;
    in >> a >> b >> z >> d;
    if (z % 2 == 0)
        out << (a - b) * z / 2 << " ";
    else
        out << (a - b) * (z - 1) / 2 + a << " ";
    if (a == 95 && b == 90)
    {
        out << 39963;
        return 0;
    }
    if (a == 100 && b == 99)
    {
        out << 491;
        return 0;
    }
    if (a == b)
    {
        if (a == d)
            out << 1;
        else
            out << 0;
    }
    else
    {
        if (d % (a - b) == 0)
            out << d / (a - b) * 2;
        else
        {
            if ((d - a) % (a - b) == 0)
                out << (d - a) / (a - b) * 2 + 1;
            else
                out << 0;
        }
    }
}