#include <iostream>
#include <cmath>

using namespace std;
long long suma,sumb,nrpers;

int main()
{
    long long n,x,y,p,a,b;
    cin>>n>>x>>y>>p;
    if(p==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            suma+=a;
            sumb+=b;
        }
        cout<<suma<<" "<<sumb<<" "<<suma-sumb;
    }
    else
    {
        for(int i=1;i<x;i++)
        {
            cin>>a>>b;
            nrpers=nrpers+a-b;
        }
        for(int i=x;i<=n;i++)
            cin>>a>>b;
        if(nrpers>=y)
            cout<<"DA";
        else
            cout<<"NU";
    }
    return 0;
}
