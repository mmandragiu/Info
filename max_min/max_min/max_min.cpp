#include <iostream>
using namespace std;

int SumCif(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, max = - 1, min = 90,sumacif=0;
    int nrmax=0, nrmin=0, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sumacif = SumCif(x);
        if (sumacif > max)
        {
            nrmax = x;
            max = sumacif;
        }
        if (sumacif < min)
        {
            nrmin = x;
            min = sumacif;
        }
    }
    cout << nrmin << '\n' << nrmax;
    return 0;
}