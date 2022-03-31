#include <iostream>
using namespace std;

int main()
{
    int n, x, f[2017] = { 0 }, p, d;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        d = 2;
        while (x > 1)
        {
            p = 0;
            while (x % d == 0)
            {
                p++;
                x /= d;
            }
            f[d] += p;
            d++;
            if (x > 1 && d > x)
                d = x;
        }
    }
    if (f[2] >= 2 && f[5] >= 1 && f[101] >= 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}