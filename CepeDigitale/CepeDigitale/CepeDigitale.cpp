#include <fstream>
#include <cmath>
using namespace std;
ifstream in("numere6.in");
ofstream out("numere6.out");

long long a, b, nr10cotora, nr10cotorb, x, y, cifa[15], cifb[15], ca, cb, i, copiea, copieb;

int main()
{
    in >> a >> b;
    copiea = a;
    copieb = b;
    int ra, rb, ela, elb;
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
    x = ela - 1, y = 0;
    while (cifa[x] == cifb[y])
    {
        x--;
        y++;
    }
    while (x >= 0)
    {
        ca = ca * 10 + cifa[x];
        x--;
    }
    elb--;
    while (elb>=y)
    {
        cb = cb * 10 + cifb[elb];
        elb--;
    }
    while (ca)
    {
        nr10cotora = nr10cotora + (ca % 10) * pow(2, i);
        ca /= 10;
        i++;
    }
    i = 0;
    while (cb)
    {
        nr10cotorb = nr10cotorb + (cb % 10) * pow(2, i);
        cb /= 10;
        i++;
    }
    out << nr10cotora + nr10cotorb << '\n';
    return 0;
}
