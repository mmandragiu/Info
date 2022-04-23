#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, s = 0;
    cin >> n;
    while (n)
    {
        i++;
        if (i % 2 == 0)
            s += n % 10;
        n /= 10;
    }
    cout << s;
    return 0;
}