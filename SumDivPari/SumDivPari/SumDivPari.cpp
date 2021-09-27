#include <iostream>

int main()
{
    unsigned long long int n, d,sum=0;
    std::cin >> n;
    for (d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            if(d%2==0)
                sum += d;
            if (d * d < n )
                if((n / d) % 2 == 0)
                    sum += n / d;
        }
    }
    std::cout << sum;
    return 0;
}