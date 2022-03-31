#include <iostream>
using namespace std;

long long a, b, c, d, cmmmc, copiec, copiea, copieb, copied, cmmdc;

int main()
{
    cin >> a >> b >> c >> d;
    copiec = c;
    copied = d;
    copiea = a;
    copieb = b;
    while (d)
    {
        int r = c % d;
        c = d;
        d = r;
    }
    cmmmc = copiec * copied / c;
    if (copiea * cmmmc > copiec * cmmmc)
    {
        copieb = b;
        copiea = a;
        while (b)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        cmmdc = a;
        copiea /= cmmdc;
        copieb /= cmmdc;
        cout << copiea << " " << copieb;
    }
    else
    {
        int nr1, nr2;
        nr1 = copiec;
        nr2 = copied;
        while (nr2)
        {
            int r = nr1 % nr2;
            nr1 = nr2;
            nr2 = r;
        }
        cmmdc = nr1;
        copiec /= cmmdc;
        copied /= cmmdc;
        cout << copiec << " " << copied;
    }
    return 0;
}