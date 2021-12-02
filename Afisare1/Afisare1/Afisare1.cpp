#include <iostream>
using namespace std;

int main()
{
    int n, v[1000], i;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n / 2; i++)
        cout << v[i] << " " << v[n - i - 1]<<" ";
    if (n % 2 == 1)
        cout << v[i];
    return 0;
}