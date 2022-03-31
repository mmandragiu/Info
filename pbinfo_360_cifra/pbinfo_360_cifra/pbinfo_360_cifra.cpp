#include <iostream>
using namespace std;

int main()
{
    int n, c, nou_n = 0, r = 0;
    cin >> n >> c;
    while (n)
    {
        if (n % 10 != c)
            nou_n = nou_n * 10 + n % 10;
        n /= 10;
    }
    while (nou_n)
    {
        r = r * 10 + nou_n % 10;
        nou_n /= 10;
    }
    if (r == 0)
        cout << -1;
    else
        cout << r;
    return 0;
}