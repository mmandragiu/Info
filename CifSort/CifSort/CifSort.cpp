#include <iostream>
using namespace std;

int NrCif(int n)
{
    int cif = 0;
    while (n)
    {
        n /= 10;
        cif++;
    }
    return cif;
}

int main()
{
    int n, v[8] = { 0 },nou_n=0,i=1,copien;
    cin >> n;
    copien = n;
    while (n)
    {
        v[NrCif(copien) - i] = n % 10;
        i++;
        n /= 10;
    }
    for (int i = 0; i < NrCif(copien); i += 2)
    {
        swap(v[i], v[i + 1]);
    }
    for (int i = 0; i < NrCif(copien); i++)
    {
        nou_n = nou_n * 10 + v[i];
    }
    cout << nou_n;
    return 0;
}