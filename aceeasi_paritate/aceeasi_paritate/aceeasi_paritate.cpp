#include <iostream>
using namespace std;

int main()
{
    int n, v[3000] = { 0 },i=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (i < n - 1)
    {
        if (v[i] % 2 == v[i + 1] % 2)
        {
            for (int p = n - 1; p >= i; p--)
                v[p + 1] = v[p];
            v[i + 1] = (v[i + 2] + v[i]) / 2;
            n++;
            i += 2;
        }
        else
            i++;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}