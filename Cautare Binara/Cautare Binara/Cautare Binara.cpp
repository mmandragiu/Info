#include <iostream>
using namespace std;


int main()
{
    unsigned long long n, m, left = 0, right = 0, mid = -1,y;
    unsigned long long  x[25000];
    bool found = false;
    cin >> n;
    for (unsigned long long i = 0; i < n; i++)
        cin >> x[i];
    cin >> m;
    for (unsigned long long i = 0; i < m; i++) {
        cin >> y;
        left = 0;
        right = n - 1;
        found = false;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (y == x[mid])
            {
                found = true;
                break;
            }
            else
            {
                if (y < x[mid])
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
