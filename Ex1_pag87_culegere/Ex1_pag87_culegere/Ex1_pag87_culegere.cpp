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
    int n,gasite=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (prim(i) == true)
            gasite++;
    }
    cout << gasite;
    return 0;
}