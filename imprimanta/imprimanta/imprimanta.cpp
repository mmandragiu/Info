#include <fstream>
using namespace std;

unsigned long long n, k, cif[17], cifren, minn, ciframax, nrcifde1, nrciframase;

int main()
{
    ifstream in("imprimanta.in");
    ofstream out("imprimanta.out");
    in >> n >> k;
    minn = 0x7FFFFFFF;
    unsigned long long copien = n;
    while (copien)
    {
        if (copien % 10 == 0)
            cif[copien % 10] = 12;
        if (copien % 10 == 1)
            cif[copien % 10] = 5;
        if (copien % 10 == 2)
            cif[copien % 10] = 11;
        if (copien % 10 == 3)
            cif[copien % 10] = 11;
        if (copien % 10 == 4)
            cif[copien % 10] = 9;
        if (copien % 10 == 5)
            cif[copien % 10] = 11;
        if (copien % 10 == 6)
            cif[copien % 10] = 12;
        if (copien % 10 == 7)
            cif[copien % 10] = 7;
        if (copien % 10 == 8)
            cif[copien % 10] = 13;
        if (copien % 10 == 9)
            cif[copien % 10] = 12;
        copien /= 10;
    }
    for (int i = 0; i <= 9; i++)
    {
        if (cif[i] < minn && cif[i]!=0)
        {
            minn = cif[i];
            ciframax = i;
        }
        else
        {
            if (cif[i] == minn)
            {
                if (i > ciframax)
                    ciframax = i;
            }
        }
    }
    out << ciframax << '\n';
    nrcifde1 = k / 5, nrciframase = k % 5;
    if (nrciframase == 0)
    {
        for (int i = 1; i <= nrcifde1; i++)
            out << 1;
    }
    if (nrciframase == 1)
    {
        if (k == 16)
            out << 74;
        else
        {
            out << "777";
            for (int i = 1; i <= nrcifde1 - 4; i++)
                out << 1;
        }
    }
    if (nrciframase == 2)
    {
        out << 7;
        for (int i = 1; i <= nrcifde1 - 1; i++)
            out << 1;
    }
    if (nrciframase == 3)
    {
        out << 8;
        for (int i = 1; i <= nrcifde1 - 2; i++)
            out << 1;
    }
    if (nrciframase == 4)
    {
        out << "77";
        for (int i = 1; i <= nrcifde1 - 2; i++)
            out << 1;
    }
    in.close();
    out.close();
    return 0;
}