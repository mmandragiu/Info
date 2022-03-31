#include <iostream>
using namespace std;

int main()
{
    int a[100][100], n, m, max = -1, s = 0, poz;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j < m; j++)
            if (a[i][j] % 2 == 0)
                s += a[i][j];
        if (s > max)
        {
            max = s;
            poz = i + 1;
        }
    }
    cout << poz;
    return 0;
}