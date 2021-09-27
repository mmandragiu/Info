#include <iostream>
using namespace std;
int CifNr(int n)
{
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int a, b, c = 0, cifc[10] = { 0 }, i = 0, poz = 0, cif = 0;
    cin >> a >> b;
    poz = CifNr(a) - 1;
    cif = CifNr(a);
    while (a)
    {
        cifc[poz] = (a % 10 + b % 10) / 2;
        a /= 10;
        b /= 10;
        poz--;
    }
    for (int i = 0; i < cif; i++)
        c = c * 10 + cifc[i];
    cout << c << endl;
    return 0;
}