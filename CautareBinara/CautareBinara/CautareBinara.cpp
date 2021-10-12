#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, v[10],left=0,right=0,mid=0,x,poz=0;
    cin >> n>>x;
    right = n - 1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (v[mid] == x)
        {
            poz = mid;
            break;
        }
        else
        {
            if (x < v[mid])
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
    }
    cout << poz;
    return 0;
}