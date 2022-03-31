#include <iostream>
using namespace std;

int a[100001], b[100001], r[200001], intersectie[200001], m, n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    int i = 1, j = 1, k = 1;
    while (i <= n && j <= m)
    {
        if (a[i] < b[j])
        {
            r[k++] = a[i++];
        }
        else
        {
            if (b[j] < a[i])
                r[k++] = b[j++];
            else
                i++;
        }
    }
    while (i <= n)
        r[k++] = a[i++];
    while (j <= m)
        r[k++] = b[j++];
    for (int i = 1; i < k; i++)
    {
        cout << r[i] << " ";
    }
    cout << '\n';
    i = 1, j = 1, k = 1;
    while (i <= n && j <= m)
    {
        if (a[i] == b[j])
            intersectie[k++] = a[i++];
        else
        {
            if (a[i] < b[j])
                i++;
            else
                j++;
        }
    }
    for (i = 1; i < k; i++)
        cout << intersectie[i] << " ";
}