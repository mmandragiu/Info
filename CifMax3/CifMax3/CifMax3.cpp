#include <iostream>
using namespace std;

int main()
{
    int n, cifmax = 0;
    cin >> n;
    while (n)
    {
        if (n % 10 > cifmax)
            cifmax = n % 10;
        n = n / 10;
    }
    cout << cifmax;
    return 0;
}