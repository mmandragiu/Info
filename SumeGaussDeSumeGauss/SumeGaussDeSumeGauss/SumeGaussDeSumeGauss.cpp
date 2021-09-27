#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, x, s = 0, i;
    cin >> n;
    for (int i1 = 1; i1 <= n; i1++)
    {
        cin >> x;
        for (i = 1; i <= x; i++)
            s += i * (i + 1) / 2;
        cout << s << " ";
        s = 0;
    }
    return 0;
}