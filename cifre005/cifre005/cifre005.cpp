#include <iostream>
using namespace std;

int main()
{
    int n, x, c = 0, r;
    cin >> n>>r;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 9 == r)
            c++;
    }
    cout << c;
    return 0;
}
