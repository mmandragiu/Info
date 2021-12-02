#include <fstream>
using namespace std;
ifstream in("maxcif.in");
ofstream out("maxcif.out");

int main()
{
    int f[10] = { 0 }, x, maxx = -1;
    while (in >> x)
    {
        f[x]++;
    }
    for (int i = 0; i < 10; i++)
        maxx = max(f[i], maxx);
    for (int i = 0; i < 10; i++)
        if (f[i] == maxx)
            out << i << " ";
    return 0;
}