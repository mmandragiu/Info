#include <iostream>
using namespace std;

int main()
{
    int n, v[26] = { 0 }, p, k;
    cin >> n >> k >> p;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (i == p)
        {
            n++;
            for (int j = n; j >= i; j--)
                v[j + 1] = v[j];
            v[i] = k;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;   
}