#include <iostream>
using namespace std;

int main()
{
    int a[100][100], n, m, c = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int j = 0; j < m; j++)
    {
        if (j == 0)
        {
            if (a[0][1] % 2 == 0 && a[1][0] % 2 == 0)
                c++;
            if (a[n - 1][0] % 2 == 0 && a[n - 2][1] % 2 == 0)
                c++;
        }
        else
        {
            if (j == m - 1)
            {
                if (a[0][m - 2] % 2 == 0 && a[1][m - 1] % 2 == 0)
                    c++;
                if (a[n - 1][j - 1] % 2 == 0 && a[n - 2][j] % 2 == 0)
                    c++;
            }
            else
            {
                if (a[0][j - 1] % 2 == 0 && a[0][j + 1] % 2 == 0 && a[1][j] % 2 == 0)
                    c++;
                if (a[n - 1][j - 1] % 2 == 0 && a[n - 1][j + 1] % 2 == 0 && a[n - 2][j] % 2 == 0)
                    c++;
            }
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                if (a[i - 1][j] % 2 == 0 && a[i][j + 1] % 2 == 0 && a[i + 1][j] % 2 == 0)
                    c++;
            }
            else
            {
                if (j == m - 1)
                {
                    if (a[i - 1][j] % 2 == 0 && a[i][j - 1] % 2 == 0 && a[i + 1][j] % 2 == 0)
                        c++;
                }
                else
                {
                    if (a[i - 1][j] % 2 == 0 && a[i][j - 1] % 2 == 0 && a[i][j + 1] % 2 == 0 && a[i + 1][j] % 2 == 0)
                        c++;
                }
            }
        }
    }
    cout << c;
    return 0;
}