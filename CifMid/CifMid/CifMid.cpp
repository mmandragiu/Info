#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, v[4], i = 1,y=0;
    cin >> x;
    while (x)
    {
        v[i] = x % 10;
        x = x / 10;
        i++;
    }
    sort(v, v + 3+1);
    for (int i2 = 1; i2 <= i-1; i2++)
        y = y * 10 + v[i2];
    cout << (y / 10) % 10;
    return 0;
}