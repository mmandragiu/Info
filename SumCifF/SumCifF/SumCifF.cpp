#include <iostream>
using namespace std;
int sumcif(int n) {
    int suma = 0;
    while (n != 0)
    {
        suma += n % 10;
        n = n / 10;
    }
    return suma;
}

int main()
{
    int n, sum = 0;
    cin >> n;
    sum = sumcif(n);
    cout << sum;
    return 0;
}