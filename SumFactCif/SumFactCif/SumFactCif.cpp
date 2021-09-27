#include <iostream>
using namespace std;
int sumfactcif(int n)
{
    int sum = 0;
    if (n == 0)
        return 1;
    while (n)
    {
        int prod = 1;
        for (int i = 1; i <= n % 10; i++)
            prod = prod * i;
        sum += prod;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumfactcif(n);
    return 0;
}