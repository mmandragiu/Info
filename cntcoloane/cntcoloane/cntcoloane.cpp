#include <iostream>
using namespace std;

int main()
{
    int a[101][101], n, m, c = 0, ok;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int j = 1; j <= m; j++)
    {
        ok = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int k = i + 1; ok && k <= n; k++)
                if (a[i][j] == a[k][j])
                    ok = 0;
        }
        if (ok == 1)
            c++;
    }
    cout << c;
    return 0;
}