#include <iostream>
#include <algorithm>
using namespace std;

int a[100][100], n, m, v[100];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            v[j] = a[i][j];
        sort(v, v + m);
        for (int j = 0; j < m; j++)
            a[i][j] = v[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}