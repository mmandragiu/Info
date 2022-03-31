#include <iostream>
using namespace std;

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int n, m, c = 0, matrice[101][101], nr = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> matrice[i][j];
        }
    }
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j ++)
        {
            if (Prim(matrice[i][j]) == true)
                c++;
        }
    }
    cout << c;
    return 0;
}