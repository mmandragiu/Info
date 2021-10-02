#include <iostream>
using namespace std;

int main()
{
    int n, x, prev = 0;
    bool found = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i == 1)
            prev = x;
        else
        {
            if (prev <= x)
                found = true;
            else
            {
                found = false;
                break;
            }
            prev = x;
        }
    }
    if (n == 1)
    {
        cout << "DA";
        return 0;
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}