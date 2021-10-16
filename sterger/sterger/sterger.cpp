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
    unsigned long long n, v[1000] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (Prim(v[i]) == true)
        {
            for (int j = i; j < n-1; j++)
                v[j] = v[j + 1];
            n--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
