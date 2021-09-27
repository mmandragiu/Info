#include <fstream>
using namespace std;
ifstream in("toate.in");
ofstream out("toate.out");
int CifNr(int n)
{
    int cif=0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int n, x, cifx[10] = { 0 }, max = -1, poz = 0, cifrex, noux = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        poz = CifNr(x) - 1;
        cifrex = CifNr(x);
        while (x)
        {
            cifx[poz] = x % 10;
            poz--;
            x /= 10;
        }
        for (int i1 = 0; i1 < cifrex; i1++)
        {
            if (cifx[i1] != 9)
                noux = noux * 10 + cifx[i1];
        }
        if (noux > max)
            max = noux;
        noux = 0;
    }
    out << max;
    return 0;
}