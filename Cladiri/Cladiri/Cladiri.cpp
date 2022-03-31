#include <fstream>
using namespace std;

int n, x, nrpal, nr_min_cuburi, cifmax, nrmax, maxi;
int NrCif(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}
bool pal(int n)
{
    int v[10] = { 0 }, nrcif = 0, ok = 0;
    while (n != 0)
    {
        v[nrcif] = n % 10;
        nrcif++;
        n /= 10;
    }
    for (int i = 0; i <= nrcif / 2 - nrcif % 2; i++)
    {
        if (v[i] == v[nrcif - 1 - i])
            ok = 1;
        else
        {
            ok = 0;
            break;
        }
    }
    if (ok == 0)
        return false;
    return true;
}
int CifMax(int n)
{
    int max = -1;
    while (n) {
        if (n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    return max;
}
int lipsa(int n)
{
    int ogl = 0, copien, lipsa = 0;
    copien = n;
    while (copien)
    {
        ogl = ogl * 10 + copien % 10;
        copien /= 10;
    }
    while (n)
    {
        if (n % 10 > ogl % 10)
            lipsa += n % 10 - ogl % 10;
        else
            lipsa += ogl % 10 - n % 10;
        n /= 10;
        ogl /= 10;
    }
    return lipsa;
}

int main()
{
    ifstream in("cladiri.in");
    ofstream out("cladiri.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        maxi = CifMax(x);
        if (maxi > cifmax)
            cifmax = maxi, nrmax = 1;
        else
        {
            if (maxi == cifmax)
                nrmax++;
        }
        if (pal(x) == true)
            nrpal++;
        else
            nr_min_cuburi += lipsa(x);
    }
    in.close();
    out << cifmax << " " << nrmax << '\n' << nrpal << '\n' << nr_min_cuburi / 2;
    out.close();
    return 0;
}