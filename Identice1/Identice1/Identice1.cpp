#include <iostream>
using namespace std;

int a[100][100], n, m, c = 0;

int main()
{
    bool identice = true;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n - 1; i++) {
        identice = true;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == a[i + 1][j])
                identice = true;
            else
            {
                identice = false;
                break;
            }
        }
        if (identice == true)
            c++;
    }
    cout << c;
    return 0;
}