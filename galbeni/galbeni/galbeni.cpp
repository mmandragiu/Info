#include <fstream>
#include <cmath>
using namespace std;

long long n, k, s, nr = 1;


int main()
{
    ifstream in("galbeni.in");
    ofstream out("galbeni.out");
    in >> s >> k >> n;
    long long NMAX = 1, produs, cifre;
    if (k == 1)
        NMAX = 10;
    if (k == 2)
        NMAX = 100;
    if (k == 3)
        NMAX = 1000;
    in.close();
    nr = s;
    for (long long i = 1; i < n; i++)
    {
        produs = 1, cifre = 0;
        int copienr = nr;
        while (copienr)
        {
            if (copienr % 10 != 0)
                produs = produs * (copienr % 10);
            copienr /= 10;
        }
        nr *= produs;
        nr *= 8;
        nr /= 9;
        copienr = nr;
        while (copienr)
            cifre++, copienr /= 10;
        while (cifre < k)
        {
            nr = nr * 10 + 9;
            cifre++;
        }
        nr = nr % NMAX;
    }
    out << nr;
    out.close();
    return 0;
}
