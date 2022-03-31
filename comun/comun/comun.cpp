#include <iostream>
#include <algorithm>
using namespace std;

int v[300001], n, p, x;

int main()
{
    bool found = false;
    p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[p] = x;
        p++;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[p] = x;
        p++;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[p] = x;
        p++;
    }
    sort(v + 1, v + p);
    for (int i = 2; i < p; i++) {
        if (v[i - 1] == v[i] && v[i] == v[i + 1])
        {
            found = true;
            cout << v[i];
            break;
        }
    }
    if (found == false)
        cout << -1;
}