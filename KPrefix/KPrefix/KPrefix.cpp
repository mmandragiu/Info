#include <iostream>
using namespace std;

void prefix(int& n, int k, int &x)
{
    x = 0;
    int v[10] = { 0 }, contor = 0, cif=0;
    int copien = n;
    while (copien)
    {
        cif++;
        v[contor] = copien % 10;
        copien /= 10;
        contor++;
    }
    for (int i = cif - 1; i > cif - k - 1; i--)
        x = x * 10 + v[i];
}

int main()
{
    int n, x = 0, k;
    cin >> n >> k;
    prefix(n, k, x);
    cout << x;
    return 0;
}