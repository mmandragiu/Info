#include <iostream>
using namespace std;
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int n, x[200], y[200] = { 0 },nr=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
    {
        if (prim(x[i]) == true)
        {
            y[nr] = x[i];
            nr++;
        }
    }
    for (int i = nr-1; i >= 0; i--)
        cout << y[i] << " ";
    return 0;
}