#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i <= n / 2; i++)
    {
        if (i == n / 2)
            cout << v[i]<<" ";
        else
            cout << v[i] << " " << v[n - i - 1] << " ";
        
    }
}