#include <fstream>
using namespace std;

int main()
{
    ifstream in("lipsa.in");
    ofstream out("lipsa.out");
    int n,x,s=0;
    in >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        in >> x;
        s += x;
    }
    out << n * (n + 1) / 2 - s;
    return 0;
}