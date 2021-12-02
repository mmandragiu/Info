#include <iostream>
using namespace std;

int main()
{
    int n, nou_n = 1,d=2,p;
    cin >> n;
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            nou_n *= d;
        d++;
        if (d * d > n)
            d = n;
    }
    cout << nou_n;
    return 0;
}