#include <iostream>
using namespace std;

int factori1[10000], factori2[10000];

int main()
{
    int n, m, d1 = 2, d2 = 2, p1, p2, i1 = 0, i2 = 0,indicemax=0;
    bool found = false;
    cin >> n >> m;
    while (n>1)
    {
        p1 = 0;
        while (n % d1 == 0)
        {
            p1++;
            n /= d1;
        }
        if (p1 != 0)
        {
            factori1[i1] = d1;
            i1++;
        }
        d1++;
        if (d1 * d1 > n)
            d1 = n;
    }
    while (m>1)
    {
        p2 = 0;
        while (m % d2 == 0)
        {
            p2++;
            m /= d2;
        }
        if (p2 != 0)
        {
            factori2[i2] = d2;
            i2++;
        }
        d2++;
        if (d2 * d2 > m)
            d2 = m;
    }
    indicemax = max(i1, i2);
    for (int i = 0; i < indicemax; i++)
        if (factori1[i] == factori2[i])
            found = true;
        else
        {
            found = false;
            break;
        }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
