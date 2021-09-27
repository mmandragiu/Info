#include <iostream>
using namespace std;
int CifNr(int n) {
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
    int n, cifn[10] = { 0 }, noul_n = 0, nr_div_3 = 0, poz = 0, poz_cif_lipsa = 0, cif = 0;
    cin >> n;
    poz = CifNr(n) - 1;
    cif = CifNr(n);
    poz_cif_lipsa = poz;
    while (n)
    {
        cifn[poz] = n % 10;
        poz--;
        n /= 10;
    }
    for (int i = 0; i < cif; i++)
    {
        for (int i1 = 0; i1 < cif; i1++)
            if (i1 != poz_cif_lipsa)
                noul_n = noul_n * 10 + cifn[i1];
        if (noul_n % 3 == 0)
            nr_div_3++;
        poz_cif_lipsa--;
        noul_n = 0;
    }
    cout << nr_div_3;
    return 0;
}