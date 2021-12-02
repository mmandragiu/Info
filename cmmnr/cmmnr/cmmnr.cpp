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
    long long cifn[13] = { 0 }, n, i = 0, nou_n = 0, max = -1, poz = 0, copien;
    cin >> n;
    copien = n;
    i = Cifre(n) - 1;
    while (n)
    {
        cifn[i] = n % 10;
        i--;
        n /= 10;
    }
    while (poz < Cifre(copien) - 1)
    {
        for (int i = 0; i < Cifre(copien); i++)
        {
            if (i != poz)
                nou_n = nou_n * 10 + cifn[i];
        }
        if (nou_n > max)
            max = nou_n;
        poz++;
        nou_n = 0;
    }
    cout << max;
}