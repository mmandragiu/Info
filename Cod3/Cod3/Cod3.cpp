#include <fstream>
using namespace std;

ifstream in("cod5.in");
ofstream out("cod5.out");

int n, f[100], x;

int main()
{
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        f[x]++;
    }
    for (int i = 0; i < 100; i++)
        f[i] = f[i] % 2;
    for (int i = 0; i < 100; i++)
    {
        if (f[i] == 1)
            out << i;
    }
    return 0;
}