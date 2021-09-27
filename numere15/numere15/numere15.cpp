#include <iostream>
using namespace std;
int CifNr(int n)
{
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int n, n1=0, n2=0, cifn[10], poz,cif=0;
    cin >> n;
    cif = CifNr(n);
    poz = CifNr(n) - 1;
    while (n)
    {
        cifn[poz] = n % 10;
        poz--;
        n /= 10;
    }
    for (int i = 0; i < cif; i++)
        if (cifn[i] % 2 == 0)
            n1 = n1 * 10 + cifn[i];
        else
            n2 = n2 * 10 + cifn[i];
    if (n1 > n2)
        cout << n1 - n2;
    else
        cout << n2 - n1;
    return 0;
}