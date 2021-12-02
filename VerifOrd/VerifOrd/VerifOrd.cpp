#include <iostream>
using namespace std;

int main()
{
    int n, x, v[500] = { 0 };
    bool found = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = 0; j < x; j++)
            cin >> v[j];
        for (int j = 0; j < x - 1; j++)
        {
            if (v[j] <= v[j + 1])
                found = true;
            else
            {
                found = false;
                break;
            }
        }
        if (found == true)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}