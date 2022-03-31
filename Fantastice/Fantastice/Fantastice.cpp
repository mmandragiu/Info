#include <fstream>
using namespace std;

ifstream in("fantastice.in");
ofstream out("fantastice.out");

int Eratostene[1000001], f[1000001] = { 0 }, valmax = -1;

int main()
{
    Eratostene[0] = 1;
    Eratostene[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        if (Eratostene[i] == 0)
        {
            for (int j = 2; j <= 1000000 / i; j ++)
                Eratostene[j*i] = 1;
        }
    }
    long long n, x, fantastice = 0, p, d, div;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        f[x]++;
        if (x > valmax)
            valmax = x;
    }
    for (int i = 0; i <= valmax; i++)
    {
        if (f[i])
        {
            div = 1;
            d = 2;
            int copiei = i;
            while (copiei > 1)
            {
                p = 0;
                while (copiei % d == 0)
                {
                    p++;
                    copiei /= d;
                }
                d++;
                if (p != 0)
                    div = div * (p + 1);
                if (copiei > 1 && d > copiei)
                    d = copiei;
            }
            if (Eratostene[div] == 0)
                fantastice++;
        }
    }
    out << fantastice;
    return 0;
}