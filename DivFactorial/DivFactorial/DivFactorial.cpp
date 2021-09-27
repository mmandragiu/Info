#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, v[12], prodfactorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prodfactorial = prodfactorial * i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (prodfactorial % v[i] == 0)
            cout << v[i] << " ";
    }
    return 0;
}