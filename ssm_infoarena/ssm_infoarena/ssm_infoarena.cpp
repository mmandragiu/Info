#include <fstream>
using namespace std;

const int N = 1e6 * 6;
int ssp[N + 1], n, best, x, i, j, sol, minim, indice, dr;

int main()
{
    ifstream in("ssm.in");
    ofstream out("ssm.out");
    in >> n;
    sol = -0xFFFFFFF;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        ssp[i] = ssp[i - 1] + x;
    }
    for (int j = 1; j <= n; j++)
    {
        if (ssp[j] < minim)
            minim = ssp[j], indice = j;
        if (ssp[j] - minim > sol)
            sol = ssp[j] - minim, i = indice + 1, dr = j;
    }
    out << sol << " " << i << " " << dr;
    return 0;
}