#include <iostream>

int main()
{
    unsigned long long n, p = 1, e = 0;
    std::cin >> n;
    if (n == 1)
    {
        std::cout << 0;
        return 0;
    }
    while (p <= n)
    {
        p *= 2;
        e++;
    }
    std::cout << e - 1;
}