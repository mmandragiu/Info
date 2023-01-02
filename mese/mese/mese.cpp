#include <iostream>
using namespace std;

int main()
{
    int n, m, mese = 0, smax = 0, l, L, a[255][255] = { 0 };
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1)
            {
                mese++;
                int l1=i, c1=j;
                while (a[l1][c1] == 1 && (l1 <= n || c1 <= m))
                {
                    if (a[l1 + 1][c1] == 1 && a[l1][c1 + 1] == 0)
                    {
                        l1++;
                        continue;
                    }
                    else
                    {
                        if (a[l1 + 1][c1] == 1 && a[l1][c1 + 1] == 1)
                        {
                            l1++, c1++;
                            continue;
                        }
                        else
                        {
                            if (a[l1 + 1][c1] == 0 && a[l1][c1 + 1] == 1)
                            {
                                c1++;
                                continue;
                            }
                            else
                                break;
                        }
                    }
                }
                for (int k1 = i; k1 <= l1; k1++)
                    for (int k2 = j; k2 <= c1; k2++)
                        a[k1][k2] = 2;
                l = l1 - i + 1, L = c1 - j + 1;
                if (l * L > smax)
                    smax = l * L;
            }
        }
    }
    cout << mese << " " << smax;
}