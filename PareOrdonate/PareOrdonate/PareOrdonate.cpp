#include <iostream>
using namespace std;

int main()
{
    int n, v1[100], v2[100],i1, i2 = 0,j=0,k=0,x;
    bool found = false;
    cin >> n;
    /*
    for (i1 = 1; i1 <= n; i1++)
    {
        cin >> v1[i1];
        if (v1[i1] % 2 == 0)
        {
            v2[i2] = v1[i1];
            i2++;
        }
    }
    if (i2 == 1)
    {
        cout << "DA";
        return 0;
    }
    else
    {

        for (int i = 0; i < i2 - 1; i++)
            if (v2[i] < v2[i + 1])
                found = true;
            else
            {
                found = false;
                break;
            }
        if (found == true)
            cout << "DA";
        else
            cout << "NU";
    }
    */
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (j == 0 and k == 0 and x%2==0)
            k = x;
        else
            if (k != 0)
            {
                if (x % 2 == 0)
                    j = x;
                else
                    continue;
                if (j > k)
                {
                    found = true;
                    k = j;
                }
                else
                {
                    found = false;
                    break;
                }
            }
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}