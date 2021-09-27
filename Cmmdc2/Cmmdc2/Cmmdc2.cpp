#include <iostream>
using namespace std;

int Cifre(int n)
{
    int cif=0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return 0;
}

int CMMDC(int a, int b)
{
    int r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, a = 0, b = 0, cifn = 0,cn;
    cin >> n;
    cn = n;
    while (n)
    {
        n /= 10;
        cifn++;
    }
    if (cifn % 2 == 1)
    {
        b = cn % ((int)pow(10, cifn / 2));
        cn /= (int)pow(10, cifn / 2);
        a = cn / 10;
        cout << CMMDC(a, b);
    }
    else
    {
        b = cn % ((int)pow(10, cifn / 2));
        cn /= (int)pow(10, cifn / 2);
        a = cn;
        cout << CMMDC(a, b);
    }
    return 0;
}