#include <iostream>
using namespace std;

int a[25][25], n, s1, s2;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        s1 += a[i][i], s2 += a[i][n - i + 1];
    cout << abs(s1 - s2);
}