#include <iostream>
using namespace std;

int main()
{
    int n,copien,ultimcif,sumpatrate=0,sumcimpare=0,sumc3=0,cifMMca5=0,prodcif=1,sum=0;
    cin >> n;
    copien = n;
    sum += n % 10;
    while (n != 0)
    {
        ultimcif = n % 10;
        sumpatrate += ultimcif * ultimcif;
        if (ultimcif % 2 == 1)
            sumcimpare += ultimcif;
        if (ultimcif % 3 == 0)
            sumc3 += ultimcif;
        if (ultimcif > 5)
            cifMMca5 ++;
        if (ultimcif != 0)
            prodcif = prodcif * ultimcif;
        if (n / 10 == 0)
            sum += ultimcif;
        n = n / 10;
    }
    cout << sumpatrate << " " << sumcimpare << " " << sumc3 << " " << cifMMca5 << " " << prodcif << " " << sum;
    return 0;
}