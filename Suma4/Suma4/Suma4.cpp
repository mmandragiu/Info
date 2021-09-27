#include <iostream>

using namespace std;
int main()
{
    unsigned long long int n, ultimcif = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ultimcif += (i * i * i * i) % 10;
        ultimcif = ultimcif % 10;
    }
    cout << ultimcif;
    return 0;
}