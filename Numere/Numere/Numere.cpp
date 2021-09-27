#include <iostream>
using namespace std;

int main()
{
    int n, v[100], p = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        if (v[i] % 2 == 0)
        {
            p = v[i];
            break;
        }
    if (p % 2 == 0)
        cout << p;
    else
        if (p = -1)
            cout << "IMPOSIBIL";
    return 0;
}