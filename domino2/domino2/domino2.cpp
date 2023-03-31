#include <fstream>
using namespace std;

unsigned long long int n, c, d, v[300001], contor, cif_nr[25];

int oglindit(int nr)
{
    int ogl = 0;
    while (nr)
    {
        ogl = ogl * 10 + nr % 10;
        nr /= 10;
    }
    return ogl;
}

int main()
{
    ifstream in("domino2.in");
    ofstream out("domino2.out");
    in >> c >> n;
    contor = 1;
    for (int i = 1; i <= n; i++)
    {
        in >> d;
        if (c == 1)
            out << d * (d + 1) * (d + 2) / 2 << " ";
        else
        {
            d = oglindit(d);
            while (d)
            {
                v[contor] = d % 10;
                d /= 10;
                contor++;
            }
        }
    }
    return 0;
}