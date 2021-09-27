#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, v[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    cout << v[2] << " " << v[1] << " " << v[0];
    return 0;
}