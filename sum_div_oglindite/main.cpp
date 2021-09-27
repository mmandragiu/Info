#include <iostream>

using namespace std;

int main()
{
    int x,n,r=0,sumtotal=0,sumdiv=0,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        r=0;
        sumdiv=0;
        while(x!=0)
        {
            r=r*10+x%10;
            x=x/10;
        }
        for(d=1;d*d<=r;d++)
        {
            if(r%d==0)
            {
                sumdiv=sumdiv+d;
                if(d*d<r)
                {
                    sumdiv=sumdiv+r/d;
                }
            }
        }
        sumtotal=sumtotal+sumdiv;
    }
    cout<<sumtotal;
    return 0;
}
