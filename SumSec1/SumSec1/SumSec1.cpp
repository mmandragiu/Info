#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, v[1000] = { 0 }, poz_prim_imp = -1, poz_ult_imp = -1,s=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1)
        {
            poz_prim_imp = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] % 2 == 1)
        {
            poz_ult_imp = i;
            break;
        }
    }
    for (int i = poz_prim_imp; i <= poz_ult_imp; i++)
        s += v[i];
    cout << s;
    return 0;
}