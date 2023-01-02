#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[1000], y[1000], n, m, left, right, mid;
    bool found = true, gasit = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x, x + n);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
        found = false;
        left = 0, right = n - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (x[mid] == y[i])
            {
                found = true;
                break;
            }
            else
            {
                if (x[mid] < y[i])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        if (found == true)
            cout << 1 <<" ";
        else
            cout << 0 << " ";
    }
    return 0;
}