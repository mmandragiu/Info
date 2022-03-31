#include <iostream>

using namespace std;

long long v[100001],n,m,i,j,s[100001],a,b,s1,s2,maxx;

int main()
{
    cin>>n;
    s[0]=0;
    for(int p=1;p<=n;p++)
    {
        cin>>v[p];
        s[p]=s[p-1]+v[p];
    }
    cin>>m;
    for(int p=1;p<=m;p++)
    {
        cin>>i>>j;
        a=min(i,j);
        b=max(i,j);
        s1=s[b];
        s2=s[a-1];
        if(s1-s2>maxx)
        maxx=s1-s2;
    }
    cout<<maxx;
    return 0;
}
