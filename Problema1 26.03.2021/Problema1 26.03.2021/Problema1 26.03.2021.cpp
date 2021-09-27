#include <iostream>
using namespace std;

int main()
{
    int a, b, ra=0,rb=0, cmmmc = 0,r;
    cin >> a >> b;
    while (a != 0)
    {
        ra = ra * 10 + a % 10;
        a = a / 10;
    }
    while (b != 0)
    {
        rb = rb * 10 + b % 10;
        b = b / 10;
    }
    while (rb != 0)
    {
        r = ra % rb;
        ra = rb;
        rb = r;
    }
    cout << ra;
    return 0;
}