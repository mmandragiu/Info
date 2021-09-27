#include <iostream>
#include <cmath>
using namespace std;

int PrimaCif(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int main()
{
    int n, v[1001] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
         if (v[i] % 10 == PrimaCif(v[i+1]))
            cout << v[i] << " " << v[i+1] << endl;
    }
    return 0;
}