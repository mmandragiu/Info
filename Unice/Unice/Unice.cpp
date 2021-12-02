#include <fstream>
using namespace std;

ifstream in("unice.in");
ofstream out("unice.out");

int main()
{
    int n, x, f[100] = { 0 };
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        f[x]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (f[i] == 1)
            out << i << " ";
    }
    return 0;
}