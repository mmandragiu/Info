#include <fstream>

using namespace std;

int main()
{
    ifstream in("vecini1.in");
    ofstream out("vecini1.out");
    int n,m,a[105][105],v1,v2,v3,v4,nrv;
    cin>>n>>m;
    for(int i=0;i<=m+1;i++)
    {
        a[0][i]=i+1000001;
    }
    for(int i=0;i<=m+1;i++)
    {
        a[n+1][]
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            nrv=0;
            if(i-1>=1)
            nrv++,v1=a[i-1][j];
            if(j+1<=m)
            nrv++,v2=a[i][j+1];
            if(i+1<=n)
            nrv++,v3=a[i+1][j];
            if(j-1>=1)
            nrv++,v4=a[i][j-1];
        }
    }
    return 0;
}
