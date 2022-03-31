#include <iostream>
using namespace std;

int a[100][100], n, m;

int main()
{
    int mincol1 = 1000000000, mincol2 = 1000000000;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] < mincol1)
            mincol1 = a[i][0];
        if (a[i][m - 1] < mincol2)
            mincol2 = a[i][m - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == mincol1)
            a[i][0] = mincol2;
        if (a[i][m - 1] == mincol2)
            a[i][m - 1] = mincol1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}