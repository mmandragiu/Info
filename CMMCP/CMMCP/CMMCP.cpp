#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int cifmax = -1, aparitie = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    while (n != 0)
    {
        if (n % 10 > cifmax and (n % 10) % 2 == 0)
        {
            cifmax = n % 10;
            aparitie = 1;
        }
        n = n / 10;
    }
    if (aparitie == 0)
    {
        cout << 10;
        return 0;
    }
    else
    {
        cout << cifmax;
        return 0;
    }
}