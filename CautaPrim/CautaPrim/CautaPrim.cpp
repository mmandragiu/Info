#include <fstream>
using namespace std;

ifstream in("cautaprim.in");
ofstream out("cautaprim.out");

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int n, x, f[100] = { 0 }, maxx = -1;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        f[x]++;
        maxx = max(x, maxx);
    }
    for(int i=maxx;i>=0;i--)
        if (f[i] == 0 && Prim(i) == true)
        {
            out << i;
            break;
        }
    return 0;
}