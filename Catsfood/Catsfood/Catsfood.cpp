#include <fstream>
using namespace std;

ifstream in("catsfood.in");
ofstream out("catsfood.out");

int main()
{
    int n, x, nr = 0, a, b, c, m = -1, k = -1, p = -1, verif;
    bool found = false;
    in >> a >> b >> c;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        verif = 0;
        m = -1;
        k = -1;
        p = -1;
        while (x)
        {
            if ((x % 10 == a || x % 10 == b || x % 10 == c) && verif == 0)
            {
                nr++;
                verif = 1;
            }
            if (x % 10 == a)
                m = a;
            if (x % 10 == b)
                k= b;
            if (x % 10 == c)
                p = c;
            x /= 10;
        }
        if (m == a && k == b && p == c)
            found = true;
    }
    out << nr << '\n';
    if (found == true)
        out << "DA";
    else
        out << "NU";
    return 0;
}