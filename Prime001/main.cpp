#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n,div=1,d,p,copien;
    cin>>n;
    copien=n;
    d=2;
    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p!=0)
            div=div*(copien*p+1);
        if(n>1 and d*d>n)
            d=n;
    }
    cout<<div;
    return 0;
}
