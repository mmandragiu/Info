#include <iostream>
using namespace std;

int main()
{
    int n, v[1001], left = 0, right = 0, l, lmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        l = 0;
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] == v[j])
            {
                l = j - i + 1;
            }
        }
        if (l > lmax)
        {
            lmax = l;
            left = i;
            right = i + l - 1;
        }
    }
    cout << left << " " << right;
    return 0;
}