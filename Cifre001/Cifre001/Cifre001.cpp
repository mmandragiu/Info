#include <iostream>
using namespace std;

int NrCif(int n)
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
    int a, b, cifa[10] = { 0 }, cifb[10] = { 0 }, pozcoincid = 0,i=1,j=1,copie;
    cin >> a >> b;
    copie = a;
    if (NrCif(a) != NrCif(b))
    {
        cout<<"NU";
        return 0;
    }
    else
    {
        while (a)
        {
            cifa[NrCif(copie) - i] = a % 10;
            i++;
            a /= 10;
        }
        while (b)
        {
            cifb[NrCif(copie) - j] = b % 10;
            j++;
            b /= 10;
        }
        for (int i = 0; i < NrCif(copie); i++) {
            if (cifa[i] == cifb[i])
                pozcoincid++;
        }
        cout << "DA"<<'\n';
        cout << pozcoincid;
    }
    return 0;   
}
