#include <fstream>
using namespace std;
ifstream cin("cifpagini.in");
ofstream cout("cifpagini.out");
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}
int nrcif(int n)
{
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int n, p, v, i=0, nrpag = 0,ciftotal=0;
    cin >> n >> p >> v;
    while (i < n)
    {
        if (prim(p) == true)
        {
            i++;
            nrpag += p;
        }
        p++;
    }
    if (v == 1)
        cout << nrpag;
    if (v == 2)
    {
        for (int i2 = 1; i2 <= nrpag; i2++)
            ciftotal += nrcif(i2);
        cout << ciftotal;
    }
    return 0;   
}