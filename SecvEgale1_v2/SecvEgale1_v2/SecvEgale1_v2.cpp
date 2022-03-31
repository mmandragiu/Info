#include <iostream>
using namespace std;

long long f[1000000], v[1000000];

int main()
{
    int n, l, r, lmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (f[v[i]] == 0)
            f[v[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (f[v[i]] != 0)
        {
            for (int j = i; j <= n; j++)
            {
                if (v[j] == v[i])
                {
                    l = j - i + 1;
                    r = j;
                }
            }
            if (l >= lmax)
            {
                lmax = l;
                l = i;
            }
        }
    }
    cout << l << " " << r;
}