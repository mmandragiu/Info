#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int v[1000], n, y[1000],primacif;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        while (v[i] != 0)
        {
            if (v[i] / 10 == 0)
            {
                primacif = v[i];
                v[i] = v[i] / 10;
            }
            else
                v[i] = v[i] / 10;
                
        }
        y[i] = primacif;
        primacif = 0;
    }
    sort(y, y + n);
    for (int i = 0; i < n; i++)
        cout << y[i];
    return 0;
}