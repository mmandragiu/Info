#include <fstream>
using namespace std;
ifstream in("cartonase.in");
ofstream out("cartonase.out");

int main()
{
    int a, b, c, n, perechi = 0, lungime = 1, maxim = 0, x = 0, lungimi[500] = { 0 }, contor = 1, maxim_2 = -1, secvente_max = 0;
    in >> c >> n >> a >> b;
    x = b;
    if (c == 1)
    {
        for (int i = 2; i <= n; i++)
        {
            in >> a >> b;
            if (a == x)
                perechi++;
            x = b;
        }
        out << perechi;
    }
    if (c == 2)
    {
        for (int i = 2; i <= n; i++)
        {
            in >> a >> b;
            if (a == x)
                lungime++;
            else
            {
                if (lungime > maxim)
                    maxim = lungime;
                lungime = 1;
            }
            x = b;
        }
        maxim = max(lungime, maxim);
        out << maxim;
    }
    if (c == 3)
    {
        for (int i = 2; i <= n; i++)
        {
            in >> a >> b;
            if (a == x)
                lungime++;
            else
            {
                if (lungime > maxim)
                {
                    maxim = lungime;
                }
                lungimi[contor] = lungime;;
                contor++;
                lungime = 1;
            }
            x = b;
        }
        for (int i = 1; i <= contor; i++)
        {
            if (lungimi[i] > maxim)
            {
                maxim = lungimi[i];
                secvente_max = 0;
            }
            else
                if (lungimi[i] == maxim)
                {
                    secvente_max++;
                }
        }
        out << secvente_max;
    }
    return 0;
}