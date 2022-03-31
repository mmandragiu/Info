#include <iostream>
using namespace std;

int a[100][100], x, n, m;

int main()
{
    bool found = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        if (a[0][i] == x)
        {
            found = true;
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[n - 1][i] == x)
        {
            found = true;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == x)
        {
            found = true;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][m-1] == x)
        {
            found = true;
            break;
        }
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}