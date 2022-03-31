#include <iostream>

using namespace std;

int a[24][24],n,i,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=n;j++)
                cout<<a[i][j]<<" ";
        }
        else{
            for(j=n;j>=1;j--)
                cout<<a[i][j]<<" ";
        }
    }
    return 0;
}
