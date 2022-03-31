#include <fstream>
using namespace std;

ifstream in("asfalt.in");
ofstream out("asfalt.out");

int main()
{
    int n, m, x, y, f[10001] = { 0 }, km_neasfalt = 0, km_asfalt = 0;
    in >> n >> m;
    for (int i = 0; i < m; i++)
    {
        in >> x >> y;
        for (int i = x + 1; i <= y; i++)
            f[i]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
            km_neasfalt++;
        if (f[i] > 1)
            km_asfalt++;
    }
    out << km_neasfalt << " " << km_asfalt;
    return 0;
}