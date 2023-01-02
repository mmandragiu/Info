#include <fstream>
using namespace std;

ifstream in("strand.in");
ofstream out("strand.out");

int sp[15001], x, n, s, p;

int main()
{
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        sp[i] = sp[i - 1] + x;
        s += x;
    }
    for (int i = 1; i <= n; i++)
    {
        if (sp[i] == s - sp[i])
        {
            p = i;
            break;
        }
    }
    out << p;
}