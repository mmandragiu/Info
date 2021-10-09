#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, t, k, lungime = 0, x, secvente = 0, v[100000] = { 0 },copiej=0,j;
    bool found = false;
    cin >> n >> t >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n - k+1; i++)
    {
        j = i;
        copiej = j;
        for (j = i; j < copiej + k; j++)
            if (v[j] <= t)
                found = true;
            else
            {
                found = false;
                break;
            }
        if (found == true)
            secvente++;
    }
    cout << secvente;
    return 0;
}