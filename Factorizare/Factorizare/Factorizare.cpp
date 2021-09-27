#include <iostream>
using namespace std;

int main()
{
    int n, d, p;
    cin >> n;
    d = 2;
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if(p!=0)
            cout << d << " " << p << '\n';
        d++;
        if (n > 1 && d * d > n)
            d = n;
    }
    return 0;
}