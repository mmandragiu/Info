#include <iostream>
using namespace std;

int main()
{
    int n, t, v, d=0,timp=0;
    cin >> n;
    float vm;
    for (int i = 1; i <= n; i++)
    {
        cin >> t >> v;
        d = d + t * v;
        timp = timp + t;
    }
    cout << d << " ";
    vm = (float)d / timp;
    cout << vm * 1.0;
    return 0;
}