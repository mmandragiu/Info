#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, v[13] = { 0 }, i = 0;
    cin >> n;
    while (n > 0)
    {
        v[i] = n % 10;
        i++;
        n = n / 10;
    }
    for (int i2 = 11; i2 >=6; i2--)
    {
        if (i2 % 2 == 1)
            cout << v[i2];
        else
            cout << v[i2] << " ";
    }
    return 0;
}