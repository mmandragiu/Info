#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, v[100000] = { 0 }, sum = 0,suma=0;
    cin >> n;
    for (unsigned long long int i = 0; i < n; ++i)
        cin >> v[i];
    for (unsigned long long int i = 0; i < n / 2; ++i)
    {
        for (unsigned long long int j = n / 2; j < n; j++)
            sum = sum + v[j];
        suma += sum*v[i];
        sum = 0;
    }
    cout << suma;
    return 0;
}