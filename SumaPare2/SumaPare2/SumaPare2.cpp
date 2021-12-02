#include <iostream>
using namespace std;

int main()
{
    int matrice[100][100] = { 0 }, n, m, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
            if (matrice[i][j] % 2 == 0)
                sum += matrice[i][j];
        }
    cout << sum;
    return 0;
}