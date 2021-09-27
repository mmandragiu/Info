#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long n,prod_cif=1;
    cin>>n;
    while(n)
    {
        prod_cif=prod_cif*(n%10);
        n=n/10;
    }
    if(sqrt(prod_cif)==(int)sqrt(prod_cif))
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
