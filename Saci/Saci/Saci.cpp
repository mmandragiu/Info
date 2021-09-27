#include <fstream>
using namespace std;
ifstream in("saci.in");
ofstream out("saci.out");
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
    int n, x, saci_sare = 0, i, i2, cifx[9] = { 0 },copiex;
    bool found = false;
    in >> n;
    for (i = 1; i <= n; i++)
    {
        in >> x;
        copiex = x;
        if (x >= 0 and x <= 9)
        {
            saci_sare++;
            continue;
        }
        else
        {
            i2 = CifNr(x) - 1;
            while (x)
            {
                cifx[i2] = x % 10;
                x /= 10;
                i2--;
            }
            for (int i2 = 0; i2 < CifNr(copiex) - 1; i2++)
            {
                if (cifx[i2] < cifx[i2 + 1])
                    found = true;
                else
                {
                    found = false;
                    break;
                }
            }
            if (found == true)
                saci_sare++;
        }
    }   
    out << saci_sare;
    return 0;
}