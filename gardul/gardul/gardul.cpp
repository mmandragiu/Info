#include <fstream>
using namespace std;

int CMMDC(int a, int b)
{
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ifstream in("gardul.in");
    ofstream out("gardul.out");
    int n, p, q, copiep, copieq, cmmmc, rosiit, albastret, comune;
    in >> n >> p >> q;
    copiep = p, copieq = q;
    cmmmc = copiep * copieq / CMMDC(p, q);
    comune = n / cmmmc;
    rosiit = n / p;
    albastret = n / q;
    out << n - rosiit - albastret + comune << '\n' << rosiit - comune << '\n' << albastret - comune << '\n' << comune;
    return 0;
}