#include <iostream>
using namespace std;

int main()
{
    int n, x;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            found == true;
        else
        {
            found == false;
            break;
        }
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
}