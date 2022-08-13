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
    int n, maxx = -1, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (Prim(x) == true && x > maxx)
            maxx = x;
    }
    cout << maxx;
    return 0;
}