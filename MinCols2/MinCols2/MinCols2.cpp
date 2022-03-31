#include <iostream>
using namespace std;

int a[20][20], m, n, valmin_total;

int main()
{
    valmin_total = 10000;
    bool found = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] < valmin_total)
                valmin_total = a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        found = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == valmin_total)
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            for (int i = 0; i < n; i++)
                a[i][j] = valmin_total;
        }
        else
            continue;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j]<<" ";
        cout << endl;
    }
    return 0;
}