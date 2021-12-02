#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int n, r, x, pct = 0, rez = 0;
    cin >> n;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        cin >> x >> r;
        rez = (int)sqrt(x * (x + 1) * (x + 2) * (x + 3) + 1);
        if (rez == r)
            pct++;
    }
    cout << pct;
    return 0;
}