#include <iostream>
using namespace std;

int main()
{
    int n, d, p=0, maxd = 0, maxp = 0;
    cin >> n;
    d = 2;
    while (n > 1)
    {
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p > maxp)
        {
            maxp = p;
            maxd = d;
        }
        d++;
        if (n > 1 and d * d > n)
            d = n;
        if (p >= maxp and maxp!=0)
            d = maxd;
    }
    cout << maxd;
    return 0;
}