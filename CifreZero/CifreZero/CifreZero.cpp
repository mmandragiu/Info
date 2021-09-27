// CifreZero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int nr_cif_zero(int n)
{
    int cif = 0;
    if (n == 0)
        return 1;
    while (n)
    {
        if (n % 10 == 0)
            cif++;
        n = n / 10;
    }
    return cif;
}

int main()
{
    int n;
    cin >> n;
    cout << nr_cif_zero(n);
    return 0;
}