#include <iostream>

using namespace std;

int a[7][7],n,i,j,p;

int main()
{
    float x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
    p=1;
    for(j=2;j<=n;j++)
    {
        x=1.0*a[1][j]/a[1][1];
        int ok=1;
        for(i=1;i<=n;i++)
        {
            if(x!=1.0*a[i][j]/a[i][1])
                ok=0;
            if(ok==1)
                p=p*x;
        }
    }
    cout<<p;
    return 0;
}
