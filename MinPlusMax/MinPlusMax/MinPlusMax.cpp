#include <iostream>
using namespace std;

int main()
{
    int n, x, min = 1000, max = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    cout << min + max;
    return 0;
}