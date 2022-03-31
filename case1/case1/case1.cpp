#include <fstream>
using namespace std;

int a[10001], n, casevizitate, intoarceri, maxcase, minintoarceri, cer3, pozcurent, cer1;

int main()
{
    ifstream in("case1.in");
    ofstream out("case1.out");
    in >> n;
    minintoarceri = 1000000;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        pozcurent = i;
        casevizitate = 0;
        intoarceri = 0;
        while (!found)
        {
            if (a[pozcurent] == i && casevizitate == 0)
            {
                found = true;
                break;
            }
            else
            {
                if (a[pozcurent] == i)
                {
                    found = true;
                    if (a[pozcurent] < pozcurent)
                        intoarceri++;
                    break;
                }
                else
                {
                    if (a[pozcurent] < pozcurent)
                        intoarceri++;
                    pozcurent = a[pozcurent];
                    casevizitate++;
                }
            }
        }
        casevizitate++;
        if (casevizitate == 1 && intoarceri == 0)
            cer1++;
        if (casevizitate > maxcase && intoarceri < minintoarceri)
            cer3 = i;
        if (casevizitate > maxcase)
            maxcase = casevizitate;
    }
    out << cer1 << '\n' << maxcase << '\n' << cer3;
    return 0;
}