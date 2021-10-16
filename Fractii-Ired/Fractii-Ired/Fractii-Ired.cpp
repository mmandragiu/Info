#include <iostream>
using namespace std; 
int phi(int n)
{
    int r = n, d = 2;
    while (n > 1)
    {
        if (n % d == 0)
        {
            r = r / d * (d - 1);
            while (n % d == 0)
                n /= d;
        }
        d++;
        if (d * d > n)
            d = n;
    }
    return r;
}

int main()
{
    int n, ired = 0;
    cin >> n;
    cout << phi(n);
    return 0;
}