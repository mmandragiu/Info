#include <iostream>
using namespace std;

int NrFact(int n)
{
    int d = 2, p, nrf = 0;
    while (n > 1) {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            nrf++;
        d++;
        if (d * d > n)
            d = n;
    }
    return nrf;
}

int main()
{
    int n, x, factmax = -1, m = 2000000001;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (NrFact(x) > factmax)
        {
            factmax = NrFact(x);
            m = x;
        }
        else
        {
            if (NrFact(x) == factmax)
                if (x < m)
                    m = x;
        }
    }
    cout << m;
    return 0;
}