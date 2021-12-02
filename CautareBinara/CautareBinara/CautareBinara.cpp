#include <iostream>
#include <algorithm>
using namespace std;

int v[25000];

int main()
{
    int n, x, left, right, mid, m;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        found = false;
        left = 0;
        right = n - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (v[mid] == x)
            {
                found = true;
                break;
            }
            else
            {
                if (v[mid] > x)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        if (found == true)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}