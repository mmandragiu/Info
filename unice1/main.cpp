#include <iostream>

using namespace std;

int main()
{
    int n,v[1001],nr_unice=0,y=0;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(v[i]==v[j])
                y++;
        if(y==1)
            nr_unice++;
        y=0;
    }
    cout<<nr_unice;
    return 0;
}
