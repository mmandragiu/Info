#include <iostream>

using namespace std;

int main()
{
    int n,v,r=0,C=0,copiev,rest,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v;
        copiev=v;
        r=0;
        while(v)
        {
            r=r*10+v%10;
            v=v/10;
        }
        while(r)
        {
            rest=copiev%r;
            copiev=r;
            r=rest;
        }
        if(copiev==1)
            C++;

    }
    cout<<C;
    return 0;
}
