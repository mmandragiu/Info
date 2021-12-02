#include <iostream>
using namespace std;

int UCP(int n)
{
    int up = -1;
    if (n == 0)
        return 0;
    while (n)
    {
        if ((n % 10) % 2 == 0)
        {
            up = n % 10;
            break;
        }
        n /= 10;
    }
    if (up == -1)
        return -1;
    else
        return up;
}

int main()
{
    int n;
    cin >> n;
    cout << UCP(n);
    return 0;
}