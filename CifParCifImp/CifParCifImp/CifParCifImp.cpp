#include <iostream>

using namespace std;
int main()
{
    int n, x, pare = 0, imp = 0, ultimcif;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
            pare++;
        else
        {
            while (x != 0)
            {
                ultimcif = x % 10;
                if (ultimcif % 2 == 0)
                    pare++;
                else
                    imp++;
                x = x / 10;
            }
        }
    }
    cout << pare << " " << imp;
    return 0;
}