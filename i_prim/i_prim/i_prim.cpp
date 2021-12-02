#include <iostream>
using namespace std;

long long i_prim(long long n)
{
    long long p1 = 0, p2 = 0, copien, nrdiv = 0, difmin = 0, i=0;
    bool found = false;
    copien = n;
    while (found == false)
    {
        nrdiv = 0;
        for (i = 1; i * i < copien; i++)
        {
            if (copien % i == 0)
            {
                nrdiv+=2;
            }
        }
        if (i * i == copien)
            nrdiv++;
        if (nrdiv == 2)
        {
            found = true;
            p1 = copien;
            break;
        }
        copien++;
    }
    nrdiv = 0;
    found = false;
    copien = n;
    while (found == false)
    {
        nrdiv = 0;
        for (i = 1; i * i <= copien; i++)
        {
            if (copien % i == 0)
            {
                nrdiv+=2;
            }
        }
        if (i * i == copien)
            nrdiv++;
        if (nrdiv == 2)
        {
            found = true;
            p2 = copien;
            break;
        }
        copien--;
    }
    difmin = p1 - p2;
    return difmin;
}

int main()
{
    long long n;
    cin >> n;
    cout << i_prim(n);
}
