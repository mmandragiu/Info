#include <fstream>
using namespace std;

ifstream in("robot2.in");
ofstream out("robot2.out");

int v[100005], n, x, y, c, nr = 0;

int main()
{
    in >> c >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x >> y;
        v[min(x, y) * 100 + max(x, y)]++;
    }
    if (c == 1)
    {
        for (int i = 0; i < 100005; i++)
        {
            if (v[i] != 0)
                nr++;
        }
        out << nr;
    }
}