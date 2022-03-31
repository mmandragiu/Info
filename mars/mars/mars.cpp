#include <iostream>
using namespace std;
long long n, m, s, d, v[200001], u[200002], x;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> s >> d >> x;
        u[s] += x;
        u[d + 1] -= x;
    }
    v[1] = u[1];
    cout << v[1] << " ";
    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + u[i];
        cout << v[i] << " ";
    }
    return 0;
}