#include <fstream>
using namespace std;

int main()
{
    ifstream in("fib.in");
    ofstream out("fib.out");
    unsigned long long int a = 1, b = 1, c, n,nr=2;
    in >> n;
    if (n == 1)
    {
        out << 1;
        return 0;
    }
    if (n == 2)
    {
        out << 1;
        return 0;
    }
    while (nr < n)
    {
        c = a + b;
        a = b;
        b = c;
        nr++;
    }
    out << c;
    return 0;
}