#include <iostream>
using namespace std;

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        else d++;
    }
    return true;
}

int main()
{
    int n, d, max=0;
    cin >> n;
    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            if (Prim(d) == true and d>max)
                max = d;
            if (d * d < n)
            {
                if (Prim(n / d) == true and n / d > max)
                    max = n / d;
            }
        }
    }
    cout << max;
    return 0;
}