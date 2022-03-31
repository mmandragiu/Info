#include <iostream>

int main()
{
    short int n;
    unsigned long long prod = 1;
    std::cin >> n;
    for (int i = 1; i <= (n - 1) * 2 + 1; i += 2)
        prod = prod * i;
    std::cout << prod;
    return 0;
}