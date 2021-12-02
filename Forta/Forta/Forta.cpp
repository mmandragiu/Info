#include <iostream>
using namespace std;

int Forta(int n)
{
    int div = 1, d = 2, p;
    while (n > 1)
    {
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p != 0)
            div = div * (p + 1);
        d++;
        if (n > 1 && d * d > n)
            d = n;
    }
    return div;
}

int main()
{
    int 
}