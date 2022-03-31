#include <fstream>
using namespace std;

long long a, b, nr10cotora,nr10cotorb, s, x, y;

int CifNr(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

int main()
{
    ifstream in("cepe.in");
    ofstream out("cepe.out");
    in >> a >> b;
    int cifa[15], cifb[15], ra, rb, ela, elb;
    long long pa, pb;
    ela = 0, elb = 0;
    while (a)
    {
        ra = a % 2;
        a /= 2;
        cifa[ela] = ra;
        ela++;
    }
    while (b)
    {
        rb = b % 2;
        b /= 2;
        cifb[elb] = rb;
        elb++;
    }
}
