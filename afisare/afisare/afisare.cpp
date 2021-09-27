#include <iostream>
using namespace std;

int main()
{
    int n,v[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (i % 2 == 0)
            cout << v[i] << " ";
    }
    cout << '\n';
    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 1)
            cout << v[i] << " ";
    }
}