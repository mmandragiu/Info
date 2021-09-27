#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("maxcadou.in");
    ofstream cout("maxcadou.out");
    long long n, cmax, x=0, v[19], i;
    cin >> n;
    while (n)
    {
        x++;
        v[x] = n % 10;
        n = n / 10;
    }
    sort(v + 1, v + x + 1);
    for (i = x; i >= 1; i--)
        cout << v[i];
}