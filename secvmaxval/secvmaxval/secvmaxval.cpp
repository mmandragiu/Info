#include <fstream>
using namespace std;

const int NMAX = 1e5 * 2;
int a[NMAX + 5];

int main()
{
    ifstream in("secvmaxval.in");
    ofstream out("secvmaxval.out");
    long long n, val;
    in >> n >> val;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    int i = 1, j = 1, sol=0;
    long long suma = a[1];
    while (j <= n)
    {
        if (suma <= val) {
            sol = max(sol, j - i + 1);
            j++;
            suma += a[j];
        }
        else {
            suma -= a[i];
            i++;

        }
    }
    out << sol;
    return 0;
}