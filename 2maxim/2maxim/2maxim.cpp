#include <iostream>
using namespace std;


int main()
{
    int n, x = 0, max1=0xFFFFFFFF,max2=0xFFFFFFFF;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > max1) {
            max2 = max1;
            max1 = x;
        }
        else
        {
            if (x > max2)
                max2 = x;
        }
    }
    cout << max1 << " " << max2;
    return 0;
}