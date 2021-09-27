#include <fstream>
using namespace std;
ifstream in("prime.in");
ofstream out("prime.out");

bool prim(int n)
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
    int x, n, s = 0;
    in >> x >> n;
    for (int i = x; i >=1; i--)
    {
        if (prim(i) == true)
        {
            out << i<<'\n';
            break;
        }
    }
    int i = 0;
    while (i != n)
    {
        x++;
        if (prim(x) == true)
        {
            s = s + x;
            i++;
        }
    }
    out << s;
}