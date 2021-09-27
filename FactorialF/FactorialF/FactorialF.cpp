#include <iostream>
using namespace std;
int Factorial(int n)
{
    unsigned long long prod = 1;
    for (int i = 1; i <= n; i++)
        prod = prod * i;
    return prod;
}
int main()
{
    int n;
    unsigned long long prod;
    cin >> n;
    prod = Factorial(n);
    cout << prod;
    return 0;
}