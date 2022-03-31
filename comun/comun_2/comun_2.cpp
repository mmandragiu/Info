#include <iostream>
using namespace std;

int a[100001], b[100001], c[100001], n, i, j, k;

int main()
{
    bool found = false;
    i = 1, j = 1, k = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    while (i <= n && j <= n && k <= n)
    {
        if (a[i] == b[j] == c[k])
        {
            found = true;
            cout << a[i];
            break;
        }
        if (a[i] < b[j])
        {
            i++;
            continue;
        }
        if (b[j] < c[k])
        {
            j++;
            continue;
        }
        if (c[k] < a[i])
        {
            k++;
            continue;
        }
    }
    if (found == false)
        cout << -1;
    return 0;
}