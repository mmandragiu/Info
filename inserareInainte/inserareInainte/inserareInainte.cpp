#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, v[100] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (sqrt(v[i]) == (int)sqrt(v[i]))
        {
            n++;
            for (int j = n - 1; j >= i; j--)
                v[j + 1] = v[j];
            v[i] = sqrt(v[i + 1]);
            i++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}