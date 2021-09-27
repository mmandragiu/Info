#include <iostream>

using namespace std;

int main()
{
    long long n,t,p,div=0,s=0,max=1,nr=0,scifmin=0,x,min=1000000001;
    cin>>n>>t>>p;
    if(t==1)
    {
        for(int i=1;i<=p;i++)
        {
            cin>>x;
            s=s+x;
            if(x<min)
                min=x;
        }
        for(int i=p+1;i<=n;i++)
        {
            cin>>x;
            s=s+x;
        }
        while(min>0)
        {
            scifmin=scifmin+min%10;
            min=min/10;
        }
        cout<<scifmin<<'\n'<<s;
    }
    max=0;
    if(t==2)
    {
       for(int i=1;i<=p;i++)
        {
            cin>>x;
            s=s+x;
            if(x>max)
                max=x;
        }
        for(int i=p+1;i<=n;i++)
        {
            cin>>x;
            s=s+x;
        }
        for(int d=1;d*d<=max;d++)
        {
            if(max%d==0 && d*d<max)
            {
                div+=2;
            }
            if(max%d==0 && d*d==max )
                div++;
        }
        cout<<div<<'\n'<<s;
    }
    return 0;
}
