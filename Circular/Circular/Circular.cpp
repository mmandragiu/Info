#include <iostream>
using namespace std;

int Cifre(int n)
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
    unsigned long long int n, v[11] = { 0 }, s = 0, indice = 0, primcif, nou_n = 0, cn, copiev[11] = { 0 },i1=0;
    cin >> n;
    cn = n;
    indice = Cifre(n);
    while (n)
    {
        v[indice] = n % 10;
        copiev[indice] = n % 10;
        n /= 10;
        indice--;
    }
    indice = Cifre(cn);
    for (int i = 1; i <= indice; i++)
    {
        primcif = v[1];
        for (i1 = 1; i1 <= indice-1; i1++)
            v[i1] = v[i1 + 1];
        v[i1] = primcif;
        for (int i1 = 1; i1 <= Cifre(cn); i1++)
            nou_n = nou_n * 10 + v[i1];
        s += nou_n;
        nou_n = 0;
    }
    cout << s;
    return 0;
}