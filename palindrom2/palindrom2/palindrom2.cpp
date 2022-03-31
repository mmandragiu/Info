#include <fstream>
using namespace std;

int NrCif(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

bool aproape_pal(int n)
{
    int nrperechitotal, nrperechi = 0;
    if (NrCif(n) % 2 == 1)
    {
        nrperechitotal = NrCif(n) / 2 + 1;
        nrperechi = 1;
    }
    else
        nrperechitotal = NrCif(n) / 2;
    int v[11] = { 0 }, nrcif = 0;
    while (n != 0)
    {
        v[nrcif] = n % 10;
        nrcif++;
        n /= 10;
    }
    for (int i = 0; i < nrcif / 2 - nrcif % 2; i++)
    {
        if (v[i] == v[nrcif - 1 - i])
            nrperechi++;
    }
    if (nrperechi == nrperechitotal - 1)
        return true;
    return false;
}

bool pal(int n)
{
    int v[10] = { 0 }, nrcif = 0, ok = 0;
    if (n <= 9)
        return true;
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

const int NMAX = 1e4;
int n, x, nrpal, nraproappal, c, v[NMAX];

int main()
{
    ifstream in("palindrom2.in");
    ofstream out("palindrom2.out");
    in >> c >> n;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> x;
            if (pal(x) == true)
                nrpal++;
        }
        out << nrpal;
    }
    if (c == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> x;
            if (aproape_pal(x) == true)
                nraproappal++;
        }
        out << nraproappal;
    }
    if (c == 3)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> x;
            bool found = false;
            while (!found)
            {
                x++;
                if (pal(x) == true)
                    break;
            }
            v[i] = x;
        }
        for (int i = 1; i <= n; i++)
            out << v[i] << " ";
    }
    in.close();
    out.close();
    return 0;
}