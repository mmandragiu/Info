#include <fstream>
using namespace std;

ifstream in("platou1.in");
ofstream out("platou1.out");

int main()
{
    int a, b, lungime = 1, l_max = 1, elem = 0, elem_min = 10;
    bool secventa = false;
    in >> a;
    while (in >> b)
    {
        if (a == b)
        {
            lungime++;
        }
        else
        {
            if (lungime > 1)
                secventa = true;
            else
                secventa = false;
            if (lungime > l_max)
            {
                l_max = lungime;
                lungime = 1;
                elem_min = a;
            }
            else
                if (lungime == l_max && secventa == true)
                {
                    if (a < elem_min)
                        elem_min = a;
                    lungime = 1;
                }
            lungime = 1;
        }
        a = b;
    }
    out << l_max << " " << elem_min;
    return 0;
}