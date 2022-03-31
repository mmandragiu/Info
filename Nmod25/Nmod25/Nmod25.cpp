#include <fstream>
using namespace std;

ifstream in("nmod25.in");
ofstream out("nmod25.out");

int main()
{
    int x, cif, n = 0, p2 = 0, p5 = 0, d = 2, p;
    in >> x;
    while (in >> cif)
    {
        n = n * 10 + cif;
        if (n >= 10000)
        {
            n = n % 10000;
            n = n * 10 + cif;
        }
    }
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p)
        {
            if (d == 2)
                p2 += p;
            if (d == 5)
                p5 += p;
        }
        d++;
        if (n > 1 && d * d > n)
            d = n;
    }
    if (p2 >= x)
        out << "DA" << endl;
    else
        out << "NU" << endl;
    if (p5 >= x)
        out << "DA";
    else
        out << "NU";
    return 0;
}