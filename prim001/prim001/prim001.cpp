#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n, d = 2, p, nrdiv = 0,copien=0;
    cin >> n;
    copien = n;
    if (n == 1)
    {
        cout << 1;
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
            nrdiv += p*copien + 1;
        d++;
        if (n > 1 && d * d > n)
            d = n;
    }
    cout << nrdiv%59999;
    return 0;
}