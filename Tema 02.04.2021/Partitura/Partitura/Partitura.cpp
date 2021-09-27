#include <fstream>
using namespace std;
ifstream in("partitura.in");
ofstream out("partitura.out");

int main()
{
    int n, a, b, c, inaltime = 0, sumcresteri = 0, sumdescresteri = 0, fuga = 0, aminor = 0, amajor = 0,dif1,dif2;
    in >> n >> a >> b;
    for (int i = 3; i <= n; i++)
    {
        in >> c;
        if (i % 3 == 0 and a != 1 and b != 1 and c != 1)
        {
            inaltime = inaltime + a + b + c;
            if (a + 3 == b and b + 2 == c)
                amajor++;
            if (a + 2 == b and b + 3 == c)
                aminor++;
        }
        if (a!=1 and b!=1 and a > b)
        {
            dif1 = a - b;
            sumcresteri += dif1;
        }
        else
        {
            if (a != 1 and b != 1)
            {
                dif1 = b - a;
                sumdescresteri += dif1;
            }
        }
        if (b!=1 and c!=1 and b > c)
        {
            dif2 = b - c;
            sumcresteri += dif2;
        }
        else
        {
            if (b != 1 and c != 1)
            {
                dif2 = c - b;
                sumdescresteri += dif2;
            }
        }
    }
}