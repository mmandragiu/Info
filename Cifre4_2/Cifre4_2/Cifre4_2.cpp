#include <iostream>
using namespace std;

int main()
{
    int f[10] = { 0 }, x, a[10], n;
    cin >> n;
    for (int i = 0; i < 10; i++)
        a[i] = i;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        do
        {
            f[x % 10]++;
            x /= 10;
        } while (x);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (f[a[i]] > f[a[j]] && f[a[j]])
            {
                swap(a[i], a[j]);
            }
            else
            {
                if (f[a[i]] == f[a[j]] && a[i] > a[j])
                    swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (f[i])
            cout << a[i] << " ";
    }
    return 0;
}