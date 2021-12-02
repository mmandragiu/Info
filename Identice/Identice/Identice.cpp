#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x[1000], y[1000], n;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];   
    for (int i = 0; i < n; i++)
        cin >> y[i];
    sort(x, x + n);
    sort(y, y + n);
    for (int i = 0; i < n; i++)
        if (x[i] == y[i])
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
    return 0;
}