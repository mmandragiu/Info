#include <iostream>
using namespace std;

int CifMax(unsigned long long n)
{
    int cifmax = -1,c=0;
    while (n)
    {
        c = n % 10;
        if (c > cifmax)
            cifmax = c;
        n /= 10;
    }
    return cifmax;
}

int main()
{
    long long int n, x, k = 0;
    cin >> n;
    k = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        k = k * 10 + CifMax(x);
    }
    cout << k * k;
    return 0;
}