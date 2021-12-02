#include <iostream>
using namespace std;

int main()
{
    int n, v[1000] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (v[i] == v[j])
            {
                for (int p = j; p < n - 1; p++)
                    v[p] = v[p + 1];
                n--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}