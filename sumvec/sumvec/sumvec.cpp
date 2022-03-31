#include <iostream>

int n, x, s;

int main()
{
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> x, s += x;
    std::cout << s;
    return 0;
}