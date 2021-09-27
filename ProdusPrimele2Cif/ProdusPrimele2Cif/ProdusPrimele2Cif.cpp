#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, prod = 1;
    cin >> n;
    while (n != 0)
    {
        if (n / 100 == 0)
        {
            prod = prod * (n % 10) * ((n / 10) % 10);
            break;
        }
        else
            n = n / 10;
    }
    cout << prod;
    return 0;
}