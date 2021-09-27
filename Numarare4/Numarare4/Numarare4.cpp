#include <iostream>
int CMMDC(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, ultimulelement,v[200],nr=0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> v[i];
    ultimulelement = v[n];
    for (int i = 1; i <= n; i++)
    {
        if(CMMDC(v[i],ultimulelement)==1)
            nr++;
    }
    std::cout<<nr;
    return 0;
}