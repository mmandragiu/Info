#include <iostream>
using namespace std;
int SumCif(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}

int main()
{
    int n, x, s[82] = { 0 }, perechi = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s[SumCif(x)]++;
    }
    for (int i = 0; i < 82; i++)
    {
        if (s[i] != 0)
            perechi = perechi + s[i] * (s[i] - 1) / 2;
    }
    cout << perechi;
    return 0;
}