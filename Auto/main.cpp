#include <iostream>

using namespace std;

int main()
{
    int n,t,v,d=0,timp=0,i;
    float vm;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t>>v;
        d=d+t*v;
        timp=timp+t;
    }
    vm=(float)d/timp;
    cout<<d<<" "<<vm;
    return 0;
}
