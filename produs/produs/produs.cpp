#include <iostream>
using namespace std;

int a[10001], b[10001];

int main()
{
    int n, m, x, k = 0, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b[x]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000 && i*j<p; j++)
        {
            if (a[i] != 0 && b[j] != 0)
                k += a[i] * b[j];
        }
    }
    cout << k;
    return 0;
}