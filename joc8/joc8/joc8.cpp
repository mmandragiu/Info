#include <fstream>
using namespace std;
ifstream in("joc8.in");
ofstream out("joc8.out");
int CifNr(int k)
{
    int cif = 0;
    while (k)
    {
        cif++;
        k /= 10;
    }
    return cif;
}
bool alternat(int n)
{
    int cifn = CifNr(n), cifre[10] = { 0 },ok=0,i=0,prev_semn,semn;
    if (n >= 2 && n <= 9)
        return true;
    else
    {
        if (cifn % 2 == 0)
            return false;
        else
        {
            while (n)
            {
                cifre[i] = n % 10;
                n /= 10;
                i++;
            }
            for (int i1 = 1; i1 <= i - 1; i1++)
            {
                if (cifre[i1] == cifre[i1 - 1])
                {
                    ok = 0;
                    break;
                }
                else
                {
                    if (i1 == 1)
                    {
                        if (cifre[i1] - cifre[i1 - 1] < 0)
                            prev_semn = 0;
                        else
                            if (cifre[i1] - cifre[i1 - 1] > 0)
                                prev_semn = 1;
                    }
                    else
                    {
                        if (cifre[i1] - cifre[i1-1] < 0)
                            semn = 0;
                        else
                            if (cifre[i1] - cifre[i1-1] > 0)
                                semn = 1;
                        if (semn != prev_semn)
                            ok = 1;
                        else
                        {
                            ok = 0;
                            break;
                        }
                        prev_semn = semn;
                    }
                }
            }
            if (cifn % 2 == 1 and ok == 1)
                return true;
            else
                return false;
        }
    }
}

int main()
{
    unsigned long long n, x,nr_alt=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (alternat(x) == true)
            nr_alt++;
    }
    out << nr_alt;
}