#include <iostream>
using namespace std;

int main()
{
    int n, m, exponent = 0;
    cin >> n >> m;
    while (m != 1)
    {
        exponent++;
        m = m / n;
    }
    cout << exponent;
    return 0;
}