#include <iostream>

int n, m, a[51][51];

int main()
{
    std::cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            std::cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        a[m-1][i] = a[m][i];
    m--;
    for (int i = 1; i <= m; i++)
        a[i][n - 1] = a[i][n];
    n--;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            std::cout << a[i][j] << " ";
        std::cout << '\n';
    }
    return 0;
}