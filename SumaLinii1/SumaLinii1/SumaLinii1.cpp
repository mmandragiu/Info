#include <iostream>
using namespace std;

long long a[100][100], n, m, s_min, s;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        s = 0;
        s_min = 100000001;
        for (int j = 0; j < m; j++)
            s += a[i][j];
        for (int j = 0; j < m; j++)
        {
            if (s - a[i][j] < s_min)
                s_min = s - a[i][j];
        }
        cout << s_min << " ";
    }
    return 0;
}