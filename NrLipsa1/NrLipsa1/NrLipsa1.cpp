#include <fstream>
using namespace std;

ifstream in("nrlipsa1.in");
ofstream out("nrlipsa1.out");

int main()
{
    int c, f[100] = { 0 }, x = -1, y = -1, nr = 0;
    while (in >> c)
    {
        if (c <= 99)
            f[c]++;
    }
    for (int i = 10; i <= 98; i+=2)
    {
        if (f[i] == 0)
        {
            x = i;
            nr++;
            break;
        }
    }
    for (int i = 98; i >= 10; i -= 2)
    {
        if (f[i] == 0)
        {
            y = i;
            nr++;
            break;
        }
    }
    if (nr == 2 && x != y)
        out << x << " " << y;
    else
        out << "nu exista";
    return 0;
}