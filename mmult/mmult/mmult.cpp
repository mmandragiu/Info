#include <fstream>
using namespace std;

ifstream in("mmult.in");
ofstream out("mmult.out");

long long f[1000000], n, x, secv = 0, i;

int main()
{
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        f[x]++;
    }
    if (f[1] == 0)
    {
        out << -1;
        return 0;
    }
    else
        out << f[1];
    return 0;
}