#include <fstream>
using namespace std;
ifstream in("gondola.in");
ofstream out("gondola.out");

int main()
{
    long long a, b,c, n, inaltime = 0, difmax = -1,max1,min1,dif1,dif2,difmax2=-1,max2,min2,cb,copiec;
    in >> n >> a >> b;
    inaltime = inaltime + a + 1 + b + 2;
    for (int i = 3; i <= n; i++)
    {
        in >> c;
        cb = b;
        copiec = c;
        if (i % 3 == 0)
        {
            c = c + 3;
            b = b + 2;
            a = a + 1;
        }
        if (i % 3 == 1)
        {
            c = c + 1;
            b = b + 3;
            a = a + 2;
        }
        if (i % 3 == 2)
        {
            c = c + 2;
            b = b + 1;
            a = a + 3;
        }
        inaltime = inaltime + c;
        if (a > b)
        {
            max1 = a;
            min1 = b;
        }
        else
        {
            max1 = b;
            min1 = a;
        }
        if (b > c)
        {
            max2 = b;
            min2 = c;
        }
        else
        {
            max2 = c;
            min2 = b;
        }
        if (max1 - min1 > difmax)
            difmax = max1 - min1;
        if (max2 - min2 > difmax)
            difmax = max2 - min2;
        dif1 = max1 - min1;
        dif2 = max2 - min2;
        if (dif1 > dif2)
        {
            if (dif1 - dif2 > difmax2)
                difmax2 = dif1 - dif2;
        }
        else
        {
            if (dif2 - dif1 > difmax2)
                difmax2 = dif2 - dif1;
        }
        a = cb;
        b = copiec;
    }
    out << inaltime << '\n' << difmax << '\n' << difmax2;
    return 0;
}