#include <iostream>
#include <algorithm>
using namespace std;

int a[100][100], n, m, v[100], i, j;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            v[i] = a[i][j];
        }
        sort(v, v + i);
        for (i = 0; i < n; i++)
            a[i][j] = v[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}