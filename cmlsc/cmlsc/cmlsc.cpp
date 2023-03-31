#include <fstream>
#include <bitset>

using namespace std;

int main()
{
    ifstream in("cmlsc.in");
    ofstream out("cmlsc.out");
    bitset<1025> a;
    bitset <1025> b;
    int m, n, x, y;
    in >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        in >> x;
        a[i] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        in >> y;
        b[i] = y;
    }
    bitset<1025> c = a & b;
    out << c;
}