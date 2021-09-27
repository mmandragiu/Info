#include <fstream>
using namespace std;
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
    ifstream in("2prim.in");
    ofstream out("2prim.out");
    int n, x,gasite=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (prim(x % 100) == true)
            gasite++;
    }
    out << gasite;
    return 0;
}