#include <iostream>

int main()
{
    unsigned long long n,cif2=0,cif3=0,ultimcif=0;
    std::cin >> n;
    while (n != 0)
    {
        ultimcif = n % 10;
        if (ultimcif == 2)
            cif2++;
        if (ultimcif == 3)
            cif3++;
        n = n / 10;
    }
    if (cif2 > cif3)
        std::cout << 2;
    if (cif3 > cif2)
        std::cout << 3;
    if (cif2 == cif3)
        std::cout << 2 << " " << 3;
    return 0;
}