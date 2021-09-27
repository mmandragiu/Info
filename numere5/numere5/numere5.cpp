#include <fstream>
using namespace std;
ifstream in("numere5.in");
ofstream out("numere5.out");

int main()
{
    long long int k,x,i,m,n,a=0,poz=0,pas=1,nrajut;
    in >> k >> x >> i >> m >> n;
    nrajut = k;
    while (a!=x)
    {
            if (pas == 1)
            {
                for (int i2 = 1; i2 <= k; i2++)
                {
                    poz++;
                    a++;
                    if (a == x)
                        break;
                }
            }
            else
            {
                while (nrajut > 1)
                {
                    int i2 = 1;
                    a += 2;
                    poz++;
                    poz++;
                    if (i2 == nrajut-1)
                       a = a - (k - 1);
                    else
                       a++;
                    if (a == x)
                        break;
                    nrajut--;
                    i2++;
                }
                nrajut = k;
                a += 2;
            }
            pas++;
    }
    out << poz << " ";

}