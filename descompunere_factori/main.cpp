#include <iostream>

using namespace std;

int main()
{
    int n,d=2;
    cin>>n;
    while(n>1)
    {
        if(d*d>n)
            d=n;
        if(n%d==0)
            n=n/d,cout<<d<<" ";
        else
            d++;
    }
    return 0;
}
