#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;
int CifNr(int n)
{
    int cif = 0;
    while (n)
    {
        n /= 10;
        cif++;
    }
    return cif;
}
int OglNr(int n)
{
    int ogl = 0;
    while (n != 0)
    {
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    return ogl;
}

int main()
{
    ifstream cin("rude.in");
    ofstream cout("rude.out");
    int n,cifn [10],cn,ok=0,cnp=0,cif=0,pozitie_schimbare,i=1,max=0,dif=0,cnpuri2[9],i2_1=0,prev;
    cin >> n;
    int cnpuri[9] = { 0 };
    cn = n;
    if (n <= 99 && n >= 10)
    {
        cout << 1 << '\n' << 1 << '\n' << (n % 10) * 10 + n / 10;
        return 0;
    }
    else
    {
        pozitie_schimbare = CifNr(n) - 2;
        while (n)
        {
            cifn[cif] = n % 10;
            n /= 10;
            cif++;
        }
        for (int i1 = 0; i1 < CifNr(cn); i1++)
        {
            if (i1 == 0)
            {
                cnpuri[i1] = cn;
            }
            else
            {
                for (int i2 = 0; i2 < pozitie_schimbare; i2++)
                {
                    cnp = cnp * 10 + cifn[i2];
                }
                cnp = cnp * 10 + cn / (int)pow(10, CifNr(cn) - 1);
                for (int i2 = pozitie_schimbare; i2 < CifNr(cn) - 1; i2++)
                {
                    cnp = cnp * 10 + cifn[i2];
                }
                pozitie_schimbare--;
                i++;
                cnp = OglNr(cnp);
                cnpuri[i1] = cnp;
                cnp = 0;
            }
        }
        cout << CifNr(cn) - 1 << '\n';
        for (int i1 = 0; i1 < CifNr(cn); i1++)
        {
            if (cnpuri[i1] > max)
                max = cnpuri[i1];
            if (cnpuri[i1]>0 && i1>=1)
            {
                cnpuri2[i2_1] = cnpuri[i1];
                i2_1++;
            }
        }
        sort(cnpuri2, cnpuri2 + i2_1);
        for (int i2 = 0; i2 < i2_1 - 1; i2++)
        {
            if (cnpuri2[i2] != cnpuri2[i2 + 1])
                if (i2 == 0)
                    dif += 2;
                else
                    dif++;
        }
        if (dif == 0)
            dif = 1;
        cout << dif << '\n' << max;
    }
    
}