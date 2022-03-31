#include <iostream>
using namespace std;

int main()
{
    int a[50][50], m, n, cnt = 0, k;
    bool egale = true;
    cin >> m >> n;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
            cin >> a[j][i];
    }
    for (int i = 0; i < n; i++)
    {
        egale = true;
        for (k = 0; k < m - 1; k++)
        {
            if (a[k][i] != a[k+1][i])
            {
                egale = false;
                break;
            }
        }
        if (egale == true)
        {
            cout << a[k][i] << " ";
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "nu exista";
    return 0;
}