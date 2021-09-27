#include <iostream>

int main()
{
    int n, v[1000], max = -1, t = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> v[i];
        if (v[i] > max)
            max = v[i];
    }
    for (int i = 1; i <= n; i++)
        t = t + max - v[i];
    std::cout << t;
    return 0;
}