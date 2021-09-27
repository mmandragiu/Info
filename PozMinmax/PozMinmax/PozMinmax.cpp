#include <iostream>
using namespace std;

int main()
{
    int n, v[1001], min = 1000001, max = -1000000,imax=0,imin=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < min)
            min = v[i];
        if (v[i] > max)
            max = v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == max)
            imax = i;
        if (v[i] == min)
            imin = i;
    }
    cout << imin << " " << imax;
}