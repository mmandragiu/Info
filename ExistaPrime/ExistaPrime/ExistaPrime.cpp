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
        d++;
    }
    return true;
}

int main()
{
    int n, x, nr = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (Prim(x) == true)
            nr++;
    }
    if (nr)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}