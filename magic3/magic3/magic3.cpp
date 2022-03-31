#include <fstream>
using namespace std;

ifstream in("magic3.in");
ofstream out("magic3.out");

int n, nrdiv_min, v[1000], c;

int NrDiv(int n)
{
    int d = 1, div = 0;
    for (d = 1; d * d < n; d++)
    {
        if (n % d == 0)
            div += 2;
    }
    if (d * d == n)
        div++;
    return div;
}

int main()
{
    nrdiv_min = 1000000000;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> v[i];
        if (NrDiv(v[i]) < nrdiv_min)
            nrdiv_min = NrDiv(v[i]);
    }
    for (int i = 0; i < n; i++)
        if (NrDiv(v[i]) == nrdiv_min)
            c++;
    out << c;
    return 0;
}