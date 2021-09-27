#include <iostream>
using namespace std;

int main()
{
    int n, min = 10, max = -1;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    while (n)
    {
        if (n % 10 < min)
            min = n % 10;
        if (n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    cout << max + min << endl;
    return 0;
}