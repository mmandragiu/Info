#include <iostream>
using namespace std;

unsigned long long CMMDI(unsigned long long n)
{
    unsigned long long d = 1, max = 1;
    for (d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            if (d % 2 == 1 && d > max)
                max = d;
            if ((n / d) % 2 == 1)
            {
                max = n / d;
                break;
            }
        }
    }
    return max;
}

int main()
{
    unsigned long long n, v[10001] = { 0 };
    cin >> n;
    for (unsigned long long i = 1; i <= n; i++)
        cin >> v[i];
    for (unsigned long long i = 1; i <= n; i++)
        cout << CMMDI(v[i]) << " ";
    return 0;
}