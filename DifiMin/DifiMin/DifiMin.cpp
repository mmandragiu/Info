#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, d, difmax = -1, a, b;
    cin >> n;
    if (sqrt(n) == (int)sqrt(n))
    {
        cout << sqrt(n) << " " << sqrt(n);
        return 0;
    }
    else
    {
        for (d = 1; d * d < n; d++)
        {
            if (n % d == 0)
            {
                if (n / d - d > difmax)
                    a = d;
                    b = n / d;
            }
        }
        cout << a << " " << b;
    }
    return 0;
}