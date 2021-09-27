#include <iostream>
using namespace std;

int main()
{
    int n, x, primcif, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        while (x)
        {
            if (x / 10 == 0)
            {
                primcif = x;
                break;
            }
            else
                x = x / 10;
        }
        s += primcif;
        primcif = 0;
    }
    cout << s;
    return 0;
}