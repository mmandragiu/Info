#include <iostream>
using namespace std;

int main()
{
    int x, y, cifmax1 = -1, cifmin1 = 10, cifmax2 = -1, cifmin2 = 10, max_abs1, min_abs1, max_abs2, min_abs2;
    cin >> x >> y;
    while (x)
    {
        if (x % 10 > cifmax1)
            cifmax1 = x % 10;
        if (x % 10 < cifmin1)
            cifmin1 = x % 10;
        x /= 10;
    }
    while (y)
    {
        if (y % 10 > cifmax2)
            cifmax2 = y % 10;
        if (y % 10 < cifmin2)
            cifmin2 = y % 10;
        y /= 10;
    }
    if (cifmax1 > cifmax2)
    {
        max_abs1 = cifmax1;
        max_abs2 = cifmax2;
    }
    else
    {
        max_abs1 = cifmax2;
        max_abs2 = cifmax1;
    }
    if (cifmin1 < cifmin2)
    {
        min_abs1 = cifmin1;
        min_abs2 = cifmin2;
    }
    else
    {
        min_abs1 = cifmin2;
        min_abs2 = cifmin1;
    }
    cout << max_abs1 * 10 + max_abs2 << " " << min_abs1 * 10 + min_abs2;
}