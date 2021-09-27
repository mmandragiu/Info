#include <iostream>
using namespace std;
int SumCif(int n)
{
    long long sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int CMMDC(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (CMMDC(i, SumCif(n)) == 1)
            cout << i << " ";
    }
}