#include <fstream>
#include <stdio.h>
#include <math.h>
#include <bitset>
using namespace std;

#define ulli unsigned long long int

int c, a, pal, v[100005], n, cer_2;
bitset<2000001> MyBitset;

bool palindrom(ulli nr)
{
    int cif[20], contor = 0;
    while (nr)
    {
        contor++;
        cif[contor] = nr % 10;
        nr /= 10;
    }
    for (int i = 1; i <= contor / 2; i++)
    {
        if (cif[i] != cif[contor - i + 1])
            return false;
    }
    return true;
}

ulli concat_la_dr(ulli x, ulli y)
{
    ulli big_nr = x, copiey = y, cify = 0;
    while (copiey)
    {
        cify++;
        copiey /= 10;
    }
    big_nr *= (int)pow(10, cify);
    big_nr += y;
    return big_nr;
}

ulli concat_la_st(ulli x, ulli y)
{
    ulli big_nr = y, copiex = x, cifx = 0;
    while (copiex)
    {
        cifx++;
        copiex /= 10;
    }
    big_nr *= (int)pow(10, cifx);
    big_nr += x;
    return big_nr;
}

int main()
{
    ifstream in("cat2pal.in");
    ofstream out("cat2pal.out");
    in >> c;
    if (c == 1)
    {
        in >> a;
        for (ulli i = 1; i <= 10 * a; i++)
        {
            if ((palindrom(concat_la_st(a, i))) == true || palindrom(concat_la_dr(a, i)) == true)
                pal++;
        }
        out << pal;
    }
    else
    {
        in >> n;
        for (int i = 1; i <= n; i++)
            in >> v[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if (palindrom(concat_la_st(v[i], v[j])) == true)
                    MyBitset[concat_la_st(v[i], v[j])] = 1;
                if (palindrom(concat_la_dr(v[i], v[j])) == true)
                    MyBitset[concat_la_dr(v[i], v[j])] = 1;
            }
        }
        for (int i = 1; i <= 2000000; i++)
            if (MyBitset[i] == 1)
                cer_2++;
        out << cer_2;
    }
    return 0;
}