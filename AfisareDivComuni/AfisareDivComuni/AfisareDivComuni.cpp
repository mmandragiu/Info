#include <iostream>
#include <algorithm>

int main()
{
    int a, b, x[100000] = { 0 }, y[100000] = { 0 },contor1=0,contor2=0;
    std::cin >> a >> b;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            x[contor1] = i;
            contor1++;
            if (i * i < a)
            {
                x[contor1] = a / i;
                contor1++;
            }
        }
    }
    for (int i = 1; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            y[contor2] = i;
            contor2++;
            if (i * i < b)
            {
                y[contor2] = b / i;
                contor2++;
            }
        }
    }
    std::sort(x, x + contor1);
    std::sort(y, y + contor2);
    for (int i = 0; i < contor1; i++)
    {
        for (int j = 0; j < contor2; j++)
        {
            if (x[i] == y[j])
            {
                std::cout << x[i] << " ";
                break;
            }
        }
    }
    return 0;
}