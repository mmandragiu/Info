#include <iostream>

using namespace std;

int main()
{
    int n, x, maxx = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > maxx)
            maxx = x;
    }
    cout << maxx;
    return 0;
}