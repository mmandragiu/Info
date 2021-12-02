#include <fstream>
using namespace std;

ifstream in("nrlipsa.in");
ofstream out("nrlipsa.out");

int main()
{
    int f[1000] = { 0 }, x = -1, y = -1, nr = 0, c;
    while (in >> c)
    {
        if (c <= 999)
            f[c]++;
    }
    for (int i = 999; i >= 100; i--)
    {
        if (f[i] == 0 && nr != 2)
        {
            if (nr == 0)
                x = i;
            else
                y = i;
            nr++;
        }
        else
        {
            if (nr == 2)
                break;
        }
    }
    if (x == -1 || y == -1)
        out << "NU";
    else
        out << x << " " << y;
    return 0;
}