#include <fstream>
using namespace std;
ifstream cin("centruprim.in");
ofstream cout("centruprim.out");
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
    int n, r=0, x=1;
    cin >> n;
    n = n / 10;
    while (n > 9)
    {
        r = (n%10)* x + r;
        n = n / 10;
        x = x * 10;
    }
    if (prim(r) == true)
        cout << 1;
    else
        cout << 0;
}