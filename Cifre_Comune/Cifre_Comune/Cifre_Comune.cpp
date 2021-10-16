#include <iostream>
using namespace std;

int main()
{
    int n, m, cifn[10] = { 0 }, cifm[10] = { 0 }, i1=0, i2=0;
    bool found = false;
    cin >> n >> m;
    while (n)
    {
        cifn[i1] = n % 10;
        i1++;
        n /= 10;
    }
    while (m)
    {
        cifm[i2] = m % 10;
        i2++;
        m /= 10;
    }
    for (int j = 0; j < i1; j++)
    {
        for (int k = 0; k < i2; k++)
        {
            if (cifn[j] == cifm[k])
            {
                found = true;
                break;
            }
            else
                found = false;
        }
        if (found == true)
        {
            break;
        }
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}