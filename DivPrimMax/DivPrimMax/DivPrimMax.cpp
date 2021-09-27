#include <iostream>
using namespace std;

int NrDivPrimi(int n)
{
    int d = 2, p, nr = 0;
    while (n>1)
    {
        p = 0;
        while (n % d == 0)
        {
            n /= d;
            p++;
        }
        if (p > 0)
            nr++;
        d++;
        if (d * d > n)
            d = n;
    }
    return nr;
}

int main()
{
    int a, b;
    cin >> a;
    int max = NrDivPrimi(a), nrmax = a;
    while (1)
    {
        cin >> b;
        if (a == b)
            break;
        if (NrDivPrimi(b) > max)
        {
            max = NrDivPrimi(b);
            nrmax = b;
        }
        else
            if (NrDivPrimi(b) == max)
                if (b > nrmax)
                    nrmax = b;
        a = b;
    }
    cout << nrmax <<" "<< max;
    return 0;
}