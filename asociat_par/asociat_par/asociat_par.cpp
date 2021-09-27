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
bool asociat_par(int n)
{
    int cifn[11] = { 0 }, nou_n = 0, cifnou_n[11] = { 0 },i=0,ok=0,copienou_n=0,palindrom=0,cifpare=0;
    if (n == 0)
        return true;
    while (n)
    {
        cifn[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int i1 = i-1; i1 >= 0; i1--)
        if (cifn[i1] % 2 == 0)
        {
            nou_n = nou_n * 10 + cifn[i1];
            cifpare++;
        }
    if (nou_n == 0 and cifpare == 0)
    {
        return false;
    }
    copienou_n = nou_n;
    while (nou_n)
    {
        palindrom = palindrom * 10 + nou_n % 10;
        nou_n /= 10;
    }
    if (palindrom == copienou_n)
        ok = 1;
    else
        ok = 0;
    if (ok == 1)
        return true;
    else
        return false;
}

int main()
{
    int n, x,nr_ascparpal=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (asociat_par(x) == true)
            nr_ascparpal++;
    }
    cout << nr_ascparpal;
    return 0;
}