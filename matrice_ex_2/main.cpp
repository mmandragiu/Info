#include <iostream>

using namespace std;

int a[16][16],n,i,j,p,x;//x=variabila cu ajutorul careia construim valorile matricei(a[i][j]=x*x)

int main()
{
    cin>>n>>p;
    x=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=p;j++)
            {
                a[i][j]=x*x;
                x+=2;
            }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
