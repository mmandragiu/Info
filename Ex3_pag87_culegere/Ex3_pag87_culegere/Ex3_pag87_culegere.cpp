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
   
    int a, b,gasite=0;
    in >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prim(i) == true)
            gasite++;
    }
    out << gasite;
    return 0;
}