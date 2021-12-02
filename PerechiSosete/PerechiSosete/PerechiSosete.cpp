#include <iostream>
using namespace std;

int main()
{
    int n, x, f[101] = { 0 }, perechi = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[x]++;
    }
    for (int i = 1; i < 101; i++)
    {
        perechi += f[i] / 2;
    }
    cout << perechi;
    return 0;
}