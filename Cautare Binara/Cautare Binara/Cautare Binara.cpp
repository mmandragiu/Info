#include <iostream>

using namespace std;

int main()
{
    unsigned long long x[25001], n, m, y;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        found = false;
        for (int i = 0; i < n; i++)
            if (x[i] == y)
            {
                found = true;
                break;
            }
            else
                found = false;
        if (found == true)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}