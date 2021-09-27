#include <iostream>
using namespace std;

int main()
{
    int n, v[40],contor=0;
    cin >> n;
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i < n; i++)
            v[i] = v[i - 1] + v[i - 2];
    while (contor != n)
    {
        cout << v[contor]<<" ";
        contor++;
    }

}