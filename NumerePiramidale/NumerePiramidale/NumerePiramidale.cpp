#include <iostream>
using namespace std;

int main()
{
    unsigned long long suma = 0, n;
    cin >> n;
    for (unsigned long long j = 1; j <= n; j++)
    {
        suma += j * j;
        cout << suma << " ";
    }
    return 0;
}