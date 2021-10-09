#include <iostream>
using namespace std;

int NrCif(int n) {
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

bool echilibrat(int n)
{
    int cif_pare = 0, cif_impare = 0,copien;
    copien = n;
    while (n)
    {
        if ((n % 10) % 2 == 0)
            cif_pare++;
        else
            cif_impare++;
        n /= 10;
    }
    if (cif_pare == cif_impare and NrCif(copien) % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    unsigned long long int a, b, sum = 0;
    cin >> a >> b;
    for (unsigned long long int i = a; i <= b; i++)
        if (echilibrat(i) == true)
            sum+=i;
    cout << sum;
    return 0;
}