#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, v[3], i = 0;
    cin >> n;
    while (n)
    {
        v[i] = n % 10;
        i++;
        n = n / 10;
    }
    sort(v, v + 3);
    cout << v[0] << " " << v[1] << " " << v[2];
    return 0;
}