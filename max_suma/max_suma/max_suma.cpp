#include <fstream>
using namespace std;
ifstream in("max_suma.in");
ofstream out("max_suma.out");

int main()
{
    int n, m, x, max = -1,s=0;
    in >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int i2 = 1; i2 <= m; i2++)
        {
            in >> x;
            s = s + x;
            if (x > max)
                max = x;
        }
        out << max << " " << s << '\n';
        max = -1;
        s = 0;
    }
    return 0;
}