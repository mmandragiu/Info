#include <fstream>
using namespace std;

int v[1003], n, k, maxx, f[101], nrcopii, numere;

int main()
{
    ifstream in("culori1.in");
    ofstream out("culori1.out");
    in >> n >> k;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    v[0] = v[n];
    v[n + 1] = v[0];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[i - 1] && v[i] == v[i + 1])
            nrcopii++;
    }
    out << nrcopii << '\n';
    for (int i = 1; i <= n; i++)
    {
        for(int j=i;j<=)
    }
}