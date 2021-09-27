#include <iostream>

using namespace std;

int main()
{
    int n,k,v[10001]={0},nr=0;
    cin>>k>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        if(v[i]<k)
            nr++;
    }
    cout<<nr+1;
    return 0;
}
