#include <iostream>

using namespace std;
int v[101],sumpare,sumpozpare,sumdiv10,sumdiv3pozimp,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {

        if(v[i]%2==0)
            sumpare+=v[i];
        if(i%2==0)
            sumpozpare+=v[i];
        if(v[i]%10==0)
            sumdiv10++;
        if(v[i]%3==0 and i%2==1)
            sumdiv3pozimp+=v[i];
    }
    for(int i=n;i>=1;i--)
        cout<<v[i]<<" ";
    cout<<'\n';
    cout<<sumpare<<'\n'<<sumpozpare<<'\n'<<sumdiv10<<'\n'<<sumdiv3pozimp;
    return 0;
}
