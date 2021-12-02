#include <iostream>
using namespace std;

int main()
{
    int n, k, multiplu1, multiplu2;
    cin >> n >> k;
    if (n % k == 0)
        cout << n;
    else
    {
        multiplu1 = (n / k + 1) * k;
        multiplu2 = n - n % k;
        if (multiplu1 - n > n - multiplu2)
            cout << multiplu2;
        else
        {
            if (multiplu1 - n < n - multiplu2)
                cout << multiplu1;
            else
                cout << multiplu2;
        }
    }
    return 0;
}