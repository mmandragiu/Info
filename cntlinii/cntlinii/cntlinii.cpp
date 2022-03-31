#include <iostream>
using namespace std;

int a[100][100], n, m, cnt;

int main()
{
    bool egale = true;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            egale = true;
            if (a[i][j] != a[i][j + 1])
            {
                egale = false;
                break;
            }
        }
        if (egale == true)
            cnt++;
    }
    cout << cnt;
    return 0;
}