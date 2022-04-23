#include <fstream>
using namespace std;

int main()
{
    ifstream in("numere2.in");
    ofstream out("numere2.out");
    int n, x, a;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        a = (x * x - (x * (x + 1)) / 2) / x;
        for (int j = 1; j <= x; j++)
            out << a + j << " ";
        out << endl;
    }
    return 0;
}