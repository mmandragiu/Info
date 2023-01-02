#include <iostream>
using namespace std;

int m, n, i, j, l, a[1005][1005], p, c;

int main()
{
    //ifstream cin("romburi.in");
    //ofstream cout("romburi.out");
    cin >> n >> m >> p;
    for (int k = 1; k <= p; k++)
    {
        cin >> i >> j >> l;
        int lin = i, col = j;
        if (l == 1)
            a[i][j] = 1;
        else
        {
            int lung = 0;
            for (int i1 = i; i1 <= i + l - 1 && i1 <= n; i1++)
            {
                for (int j1 = j; j1 <= j + lung && j1 <= m; j1++)
                    a[i1][j1] = 1;
                for (int j1 = j; j1 >= j - lung && j1 >= 1; j1--)
                    a[i1][j1] = 1;
                lung++;
            }
            lung = l - 2;
            for (int i1 = i + l; i1 <= i + 2 * l - 2 && i1 <= n; i1++)
            {
                for (int j1 = j; j1 <= j + lung && j1 <= m; j1++)
                    a[i1][j1] = 1;
                for (int j1 = j; j1 >= j - lung && j1 >= 1; j1--)
                    a[i1][j1] = 1;
                lung--;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++)
            if (a[i][j] == 0)
                c++;
    }
    cout << c;
    return 0;
}