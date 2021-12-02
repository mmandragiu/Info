#include <iostream>
using namespace std;

int main()
{
    int n, a, b, poz = 0, min = 0, max = 0, difmax = -1, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        if (max - min > difmax)
        {
            x = a;
            y = b;
            difmax = max - min;
        }
    }
    cout << x << " "<< y;
    return 0;
}