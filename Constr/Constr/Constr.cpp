#include <iostream>
using namespace std;
int sumcif(int n)
{
    int sumcif = 0;
    while (n != 0)
    {
        sumcif += n % 10;
        n = n / 10;
    }
    return sumcif;
}

int main()
{
    int n, v[200], y[200];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        y[i] = v[i] % (sumcif(v[i]));
    }
    for (int i = 0; i < n; i++)
        cout << y[i]<<" ";
    return 0;
}