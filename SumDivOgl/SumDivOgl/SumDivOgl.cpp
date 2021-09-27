#include <iostream>

using namespace std;
int SumDiv(int n)
{
    int d;
    int sumdiv = 0;
    for (d = 1; d * d < n; d++)
    {
        if (n % d == 0)
        {
            sumdiv = sumdiv + d;
            sumdiv += n / d;
        }
    }
    if (d * d == n)
        sumdiv += d;
    return sumdiv;
}

int main()
{
    unsigned long long int x, n, r = 0, sumtotal = 0, sumdiv = 0, d;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        r = 0;
        sumdiv = 0;
        while (x != 0)
        {
            r = r * 10 + x % 10;
            x = x / 10;
        }
        sumdiv = SumDiv(r);
        sumtotal = sumtotal + sumdiv;
    }
    cout << sumtotal;
    return 0;
}