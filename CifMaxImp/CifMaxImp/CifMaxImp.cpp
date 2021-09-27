#include <iostream>

int main()
{
    int n, x, cifmax = -1, c = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> x;
        while (x)
        {
            if (x % 10 > cifmax)
                cifmax = x % 10;
            x = x / 10;
        }
        if (cifmax % 2 == 1)
            c++;
        cifmax = -1;
    }
    std::cout << c;
    return 0;
}