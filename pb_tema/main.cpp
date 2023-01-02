#include <iostream>
#include <algorithm>

using namespace std;

int n,a[105][105], s1, s2;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                s1+=a[i][j];
            if(i+j-1==n)
                s2+=a[i][j];
        }
    }
    cout<<abs(s1-s2);
    return 0;
}
