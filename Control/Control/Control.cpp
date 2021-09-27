#include <iostream>
using namespace std;
int Sum(int n)
{
    int suma = 0;
    while (n)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int CifControl(int n)
{
    int sumcif = 0;
    while (n)
    {
        sumcif += n % 10;
        n /= 10;
    }
    while (sumcif > 9)
    {
        sumcif = Sum(sumcif);
    }
    return sumcif;
}

int main()
{
    int n;
    cin >> n;
    cout << CifControl(n);
    return 0;
}