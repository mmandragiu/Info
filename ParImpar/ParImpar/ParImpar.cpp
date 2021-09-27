#include <iostream>
using namespace std;

int ParImpar(int n)
{
    int v[11] = { 0 },i=1,copien;
    copien = n;
    while (n)
    {
        v[i] = n % 10;
        n = n / 10;
        i++;
    }
    for (int i2 = i; i2 >= 1; i2--)
    {            
        if (v[i2] % 2 == copien % 2)
            n = n * 10 + v[i2];
    }
    return n;
}
int main()
{
    int a, b,x,y;
    cin >> a >> b;
    x = ParImpar(a);
    y = ParImpar(b);
    if (x > y)
        cout << a;
    if (x < y)
        cout << b;
    if (x == y)
    {
        if (a > b)
            cout << a;
        else
            cout << b;
    }
}