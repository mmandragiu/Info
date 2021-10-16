#include <iostream>
using namespace std;

bool Prim(int n)
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
    unsigned long long int n, d = 2, p,m=0;
    cin >> n;
    if (Prim(n) == true)
    {
        cout << n;
        return 0;
    }
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            m = d;
        d++;
        if (d * d > n)
            d = n;
    }
    cout << m;
    return 0;
}