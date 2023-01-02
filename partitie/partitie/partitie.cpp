#include <fstream>
#include <algorithm>
using namespace std;
const int NMAX = 1e5 * 3;
unsigned long long sol[NMAX + 5], a[NMAX + 5], n, d, nr, j;
int main()
{
    ifstream in("partitie.in");
    ofstream out("partitie.out");
    in >> n >> d;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        j = i;
        if (sol[i] == 0)
        {
            sol[i] = ++nr;
        }
        while (j <= n && (sol[j] > 0 || a[j] < a[i] + d))
            j++;
        if (j <= n)
            sol[j] = sol[i];
    }
    out << nr << '\n';
    for (int i = 1; i <= n; i++)
        out << sol[i] << '\n';
    return 0;
}