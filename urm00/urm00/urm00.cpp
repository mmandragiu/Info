#include <iostream>
using namespace std;

int main()
{
    int n,r;
    cin >> n;
    r = n % 100;
    if (r == 0)
        cout << n;
    else
        cout << n - r + 100;
    return 0;
}