#include <fstream>
using namespace std;
const int NMAX = 302;
const int ND = 4;
const int dl[] = { 0,1,0,-1 };
const int dc[] = { 1,0,-1,0 };

long long a[321][321], k, n, p, v[90602], m;
bool marcat[NMAX + 1][NMAX + 1];

int main()
{
    ifstream in("medalion.in");
    ofstream out("medalion.out");
    long long val, linie, spira, j;
    in >> k >> n >> p;
    in.close();
    m = n / 2 + n % 2; a[m][m] = 1; linie = m;
    val = 2; spira = 1;
    while (linie >= 1)
    {
        for (j = 1; j <= 2 * spira - 1; j++)//dreapta
        {
            a[linie][linie + j] = val; val = 1 + val % k;
        }
        for (j = 1; j <= 2 * spira - 1; j++)//jos
        {
            a[linie + j][m + spira] = val; val = 1 + val % k;
        }
        for (j = m + spira - 1; j >= m - spira; j--)//stanga
        {
            a[m + spira][j] = val; val = 1 + val % k;
        }
        for (j = m + spira - 1; j >= m - spira; j--)//sus
        {
            a[j][m - spira] = val; val = 1 + val % k;
        }
        spira++;
        linie--;
    }
    int s, max = 0;
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j <= n; j++)
        {
            s += a[i][j];
        }
        if (s > max)
            max = s;
    }
    out << max << '\n';
    val = (1 + 4 * p * p + 3 * p) % k;
    if (val == 0) out << k << endl;
    else out << val << endl;
    return 0;
}