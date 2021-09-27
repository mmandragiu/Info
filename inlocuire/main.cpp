#include <iostream>

using namespace std;
int main()
{
    int n,v[201],s=0,elemnenule=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        s+=v[i];
        if(v[i]!=0)
            elemnenule++;
    }
    s=s/elemnenule;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
            v[i]=s;
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
