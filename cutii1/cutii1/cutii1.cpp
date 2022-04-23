#include <fstream>
using namespace std;

int main()
{
    ifstream in("cutii1.in");
    ofstream out("cutii1.out");
    int n, v[10000] = { 0 }, t, b, maxx = 0, cutiigoale = 0, pozcurenta = 0, r;
    in >> n >> t >> b;
    while (b)
    {
        //pozcurenta = (pozcurenta + t) % (2 * n - 2);
        //if (pozcurenta == 0)
            //pozcurenta = 2 * n - 2;
        //if (pozcurenta > n)
            //pozcurenta = 2 * n - pozcurenta;
        for (int i = 1; i <= t; i++)
        {
            if (i <= n)
                pozcurenta++;
            if (i > n && pozcurenta > 1)
                pozcurenta--;
            else
                if (i > n && pozcurenta == 1)
                    pozcurenta++;
        }
        v[pozcurenta]++;
        b--;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
            cutiigoale++;
        if (v[i] > maxx)
            maxx = v[i];
    }
    out << cutiigoale << " " << maxx;
}