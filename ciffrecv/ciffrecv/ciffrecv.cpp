#include <fstream>
using namespace std;

ifstream in("ciffrec.in");
ofstream out("ciffrec.out");

bool Prim(int n)
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

int main()
{
    int x, f[10] = { 0 }, max = -1, aparitii = 0, n = 0, nrmax = -1;
    while (in >> x)
    {
        f[x]++;
        n++;
        if (x > nrmax && (x==2 || x==3 || x==5 || x==7))
            nrmax = x;
    }
    out << nrmax << " " << f[nrmax];
    return 0;
}