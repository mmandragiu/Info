#include <iostream>
using namespace std;

long long nrmaxim(int n)
{
    long long max = 0, p = 1, k = 0, nrnou;
    nrnou = n;
    while (n)
    {
        k++;
        p *= 10;
        n /= 10;
    }
    p /= 10;
    for (int i = 1; i <= k; i++)
    {
        if (max < nrnou)
            max = nrnou;
        nrnou = nrnou % p * 10 + nrnou / p;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    cout << nrmaxim(n);
}