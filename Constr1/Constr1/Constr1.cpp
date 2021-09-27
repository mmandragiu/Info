#include <iostream>
using namespace std;

int main()
{
    int n, x[200], y[200] = { 0 },suma=0;
    cin >> n;
    for (int i = 0; i < n; i++)//citim elementele din vector
        cin >> x[i];
    for (int i = 0; i < n; i++)
    {
        for (int i2 = 0; i2 < n; i2++)//pentru fiecare elment din vector, parcurgem vectorul
        {
            suma += x[i2];
        }
        y[i] = suma - x[i];
        suma = 0;
    }
    for (int i = 0; i < n; i++)
        cout << y[i] << " ";
    return 0;
}
