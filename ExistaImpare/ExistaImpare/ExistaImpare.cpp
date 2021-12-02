#include <iostream>
using namespace std;

int main()
{
    int n, x;
    bool found = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
        {
            found = true;
            break;
        }
        else
            found = false;
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}