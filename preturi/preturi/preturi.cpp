#include <iostream>

using namespace std;

long long a[105][105], v[105], n, m, s;

int main()
{
    long long minim = 0xFFFFFFF;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int j = 1; j <= n; j++)
    {
        minim = 0xFFFFFFF;
        for (int i = 1; i <= m; i++)
        {
            if (a[i][j] != -1)
                minim = min(minim, a[i][j] * v[j]);
        }
        s += minim;
    }
    cout << s;
    return 0;
}