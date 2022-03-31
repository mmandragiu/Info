#include <iostream>
using namespace std;

int main()
{
    int k, x, max = -1, min = 1000001, nr = 0, y;
    cin >> k;
    while (cin>>y && y != 0)
    {
        if (y < min && y % 10 == k)
        {
            min = y;
        }
        if (y > max && y % 10 == k)
        {
            max = y;
        }
        if (y > min && y < max && y%10==k)
            nr++;
    }
    cout << nr;
    return 0;
}