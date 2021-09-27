#include <iostream>

int main()
{
    long long n, v[100001] = { 0 }, difmax = -2000000002,min=1000000001,max=-1000000001;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        min = 1000000001, max = -1000000001;
        for (int a = 1; a <= i; a++)
            if (v[a] > max)
                max = v[a];
        for (int b = i; b <= n; b++)
            if (v[b] < min)
                min = v[b];
        if (max - min > difmax)
            difmax = max - min;
    }
    std::cout << difmax;
    return 0;
}