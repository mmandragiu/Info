#include <iostream>
using namespace std;
int sum_div(int n)
{
    int sum = 0;
    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            sum = sum + d;
            if (d * d < n)
                sum = sum + n / d;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sum_div(n);
    return 0;
}