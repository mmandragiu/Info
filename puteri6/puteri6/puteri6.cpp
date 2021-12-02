#include <fstream>
using namespace std;

ifstream in("puteri.in");
ofstream out("puteri.out");

int main()
{
    long long int fputeri[10] = { 0 }, x, n, cif0 = 0, nr = 0, poz = 0, nrgasit = 1, putere = 0;
    bool found = false;
    in >> n;
    while (in >> x)
    {
        while (x > 1)
        {
            cif0++;
            x /= 10;
        }
        fputeri[cif0]++;
        nr++;
        cif0 = 0;
    }
    if (nr < n)
        out << "NU EXISTA";
    else
    {
        for (int i = 0; i < nr; i++)
        {
            if (poz == n && fputeri[i]==0)
            {
                putere = i - 1;
                found = true;
                break;
            }
            for (int j = 0; j < fputeri[i]; j++)
            {
                if (poz < n)
                    poz++;
                else
                {
                    if (poz == n)
                    {
                        putere = fputeri[i];
                        found = true;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < putere; i++)
            nrgasit *= 10;
        out << nrgasit;
    }
}