#include <iostream>

int main()
{
    unsigned int n;
    unsigned long long prod = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    std::cout << prod;
}