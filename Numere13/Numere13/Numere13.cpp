#include <iostream>
using namespace std;

int PrimCif(int n)
{
    while (n > 9) {
        n = n / 10;
    }
    return n;
}

int main()
{
    long long x, y, p1 = 0, p2 = 0, perechi = 0;
    cin >> x >> y;
    while (x != 0 && y != 0)
    {
        if (PrimCif(x) == PrimCif(y))
            perechi++;
        cin >> x >> y;
    }
    cout << perechi;
    return 0;
}