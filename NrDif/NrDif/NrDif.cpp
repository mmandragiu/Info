#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("nrdif.in");
ofstream out("nrdif.out");

int main()
{
    long long n, v[200000], difmax = -1;
    in >> n;
    for (int i = 0; i < n; i++)
        in >> v[i];
    sort(v, v + n);
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > difmax)
            difmax = v[i] - v[i - 1];
    }
    out << difmax;
    return 0;
}