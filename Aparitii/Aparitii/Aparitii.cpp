#include <iostream>
using namespace std;
int main()
{
    int n, ultimcif, aparitii = 1;
    cin >> n;
    ultimcif = n % 10;
    n = n / 10;
    while (n != 0)
    {
        if (n % 10 == ultimcif)
            aparitii++;
        n = n / 10;
    }
    cout << aparitii;
    return 0;
}