#include <iostream>
using namespace std;

int cifre(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

int main()
{
    int cifren[11], i, n, noun = 0, rmax = 0, copie, copien;
    cin >> n;
    copien = n;
    i = cifre(n);
    copie = i;
    while (n) {
        cifren[i] = n % 10;
        n /= 10;
        i--;
    }
    for (int i = 1; i <= copie; i++)
    {
        noun = 0;
        for (int j = 1; j <= copie; j++)
        {
            if (i != j)
                noun = noun * 10 + cifren[j];
        }
        if (noun != 0 && copien % noun > rmax)
            rmax = copien % noun;
    }
    cout << rmax;
    return 0;
}