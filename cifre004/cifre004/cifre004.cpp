#include <iostream>
using namespace std;

int NrCif(int n)
{
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int SumCif(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, cat = 0, rest = 0,sumacif=0;
    cin >> n;
    sumacif = SumCif(n);
    if (sumacif <= 9)
    {
        cout << sumacif;
        for (int i = 1; i <= sumacif - 1; i++)
            cout << 0;
    }
    else
    {
        cat = sumacif / 9;
        rest = sumacif % 9;
        for (int i = 1; i <= cat; i++)
            cout << 9;
        cout << rest;
        int k = sumacif - cat - 1;
        while (k)
        {
            cout << 0;
            k--;
        }
    }
}