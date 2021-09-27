#include <iostream>
using namespace std;

int main()
{
    int n, x, maxpozpara =-1000000000, max2cif = -1000000000, aparitie = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i % 2 == 0 && x > maxpozpara)
            maxpozpara = x;
        if (i % 2 == 1 && x / 10 <= 9 && x/10>0)
        {
            max2cif = x;
            aparitie = 1;
        }
    }
    if (aparitie == 0)
    {
        cout << maxpozpara << " " << -1;
        return 0;
    }
    else
        cout << maxpozpara << " " << max2cif;
    return 0;
}