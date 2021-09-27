#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, s = 0, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        while (x)
        {
            s = s + (x % 10) * (x % 10) * (x % 10);
            x = x / 10;
        }
    }
    cout << s;
    return 0;
}