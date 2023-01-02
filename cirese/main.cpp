#include <iostream>

using namespace std;

int main()
{
    int n,m,k,i1,j1,i2,j2,maxx=-1, a[105][105], s[105][105],suma;
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
        }
    }
    for(int i=1; i<=k; i++)
    {
        cin>>i1>>j1>>i2>>j2;
        suma=s[i2][j2]-s[i1-1][j2]-s[i2][j1-1]+s[i1-1][j1-1];
        if(suma>maxx)
            maxx=suma;
    }
    cout<<maxx;
    return 0;
}
