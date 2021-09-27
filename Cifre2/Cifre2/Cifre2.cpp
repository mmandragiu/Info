#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while (n != 0)
    {
        if (n / 100 == 0)
        {
            sum = sum + n % 10 + (n / 10) % 10;
            n = n / 100;
            break;
        }
        else
            n = n / 10;
    }
    cout << sum;
    return 0;
}