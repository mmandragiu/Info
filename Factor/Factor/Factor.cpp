#include <iostream>
using namespace std;

int FactorMax(int n)
{
    int d = 2, p=0, max = 0;
    while (n > 1)
    {
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            if (d > max)
                max = d;
        d++;
        if (d * d > n)
            d = n;
    }
    return max;
}

int PutereMax(int n)
{
    int p = 0;
    int fmax = FactorMax(n);
    while (n % fmax == 0)
    {
        p++;
        n /= fmax;
    }
    return p;
}

int main()
{
    int n, x, maxfactor = -1, p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (FactorMax(x) > maxfactor)
        {
            maxfactor = FactorMax(x);
            p = PutereMax(x);
        }
        else
            if (FactorMax(x) == maxfactor)
                p += PutereMax(x);
    }
    cout << maxfactor << " " << p;
}