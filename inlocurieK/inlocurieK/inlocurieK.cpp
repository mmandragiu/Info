#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, v[200] = { 0 }, k, multiplu1, multiplu2;
    cin >> k;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
            continue;
        else
        {
            multiplu1 = (v[i] / k + 1) * k;
            multiplu2 = v[i] - v[i] % k;
            if (multiplu1 - v[i] > v[i] - multiplu2)
                v[i] = multiplu2;
            else
            {
                if (multiplu1 - v[i] < v[i] - multiplu2)
                    v[i] = multiplu1;
                else
                    v[i] = multiplu2;
            }
        }
    }
    sort(v, v + n);
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}