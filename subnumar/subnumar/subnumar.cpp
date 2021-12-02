#include <fstream>
using namespace std;

ifstream in("subnumar.in");
ofstream out("subnumar.out");

int main()
{
    int x, f[100] = { 0 }, nrmax_apar = -1;
    while (in >> x)
    {
        while (x > 9)
        {
            f[x % 100]++;
            x /= 10;
        }
    }
    for (int i = 10; i <= 99; i++)
    {
        if (f[i] > nrmax_apar)
            nrmax_apar = f[i];
    }
    for (int i = 99; i >= 10; i--)
    {
        if (f[i] == nrmax_apar)
            out << i << " ";
    }
    return 0;
}