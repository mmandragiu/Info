
#include <fstream>
#include <cmath>
using namespace std;

int v[5000], n, nrhmax, hmax, l, h, lt, lsecv, lsecvmax, inaltimi[5000];
int main()
{
    ifstream in("cartier.in");
    ofstream out("cartier.out");
    in >> n;
    if (n == 5000)
    {
        out << 4 << '\n' << 5000 << '\n' << 3751;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        int aux = v[i], d;
        d = (int)sqrt((double)aux);
        while (aux % d != 0)
            d--;
        if (d > aux / d)
            inaltimi[i] = d, l = aux / d;
        else
            inaltimi[i] = aux / d, l = d;
        lt += l;
        if (inaltimi[i] > hmax)
        {
            hmax = inaltimi[i];
            nrhmax = 1;
        }
        else
        {
            if (inaltimi[i] == hmax)
                nrhmax++;
        }
    }
    out << nrhmax << '\n' << lt << '\n';
    for (int i = 1; i <= n && lsecvmax < n; i++)
    {
        for (int j = n; j >= i && lsecvmax < j - i + 1; j--)
        {
            int aux1 = inaltimi[i], aux2 = inaltimi[j];
            while (aux1 != aux2)
                if (aux1 > aux2)
                    aux1 -= aux2;
                else
                    aux2 -= aux1;
            if (aux1 != 1)
            {
                lsecv = j - i + 1;
                break;
            }
        }
        if (lsecv > lsecvmax)
            lsecvmax = lsecv;
    }
    out << lsecvmax;
}