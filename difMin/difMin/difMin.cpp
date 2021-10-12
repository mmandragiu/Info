#include <iostream>
using namespace std;
int main()
{
    int n, v[10000] = { 0 }, max = -1, min = 1000000001, difmin = 1000000010, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            max = v[i];
            min = v[i + 1];
        }
        else
        {
            max = v[i + 1];
            min = v[i];
        }
        if (max - min < difmin)
        {
            difmin = max - min;
            x = max;
            y = min;
        }
    }
    cout << x << " " << y;
    return 0;
}
