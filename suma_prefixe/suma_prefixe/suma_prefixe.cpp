#include <iostream>
using namespace std;

int main()
{
    int n, S = 0, p = 1;
    cin >> n;
    int copien = n;
    while (n)
    {
        n = n / 10;
        p = p * 10;
    }
    p = p / 10;
    while (p)
    {
        S = S + copien / p;
        p = p / 10;
    }
    cout << S;
    return 0;
}