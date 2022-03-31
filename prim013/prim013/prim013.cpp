#include <fstream>
#include <cmath>

using namespace std;

ifstream in("prim013.in");
ofstream out("prim013.out");

unsigned long long Eratostene[1000001];

int NrDiv(int n)
{
    int d, nrdiv = 0;
    for (d = 1; d * d < n; d++)
    {
        if (n % d == 0)
            nrdiv += 2;
    }
    if (d * d == n)
        nrdiv++;
    return nrdiv;
}

int main()
{
    Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i < sqrt(1000000); i++)
    {
        if (Eratostene[i] == 0)
            for (int j = 2; j <= 1000000 / i; j++)
                Eratostene[j * i] = 1;
    }
    int n, x, c = 0;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        if (Eratostene[NrDiv(x)] == 0 && x!=1)
            c++;
    }
    out << c;
    return 0;
}
