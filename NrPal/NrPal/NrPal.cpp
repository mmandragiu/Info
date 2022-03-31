#include <iostream>
using namespace std;

bool pal(int n)
{
    int v[7] = { 0 }, nrcif = 0, ok = 0;
    while (n != 0)
    {
        v[nrcif] = n % 10;
        nrcif++;
        n /= 10;
    }
    for (int i = 0; i <= nrcif / 2 - nrcif % 2; i++)
    {
        if (v[i] == v[nrcif - 1 - i])
            ok = 1;
        else
        {
            ok = 0;
            break;
        }
    }
    if (ok == 0)
        return false;
    return true;
}

int main()
{
    int a, b, c = 0, min, max;
    cin >> a >> b;
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    for (int i = min; i <= max; i++) {
        if (pal(i) == true)
            c++;
    }
    cout << c;
    return 0;
}