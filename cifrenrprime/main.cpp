#include <iostream>

using namespace std;
bool prim (int n)
{
    int d=2;
    if(n<2)
    return false;
    while(d*d<=n)
    {
        if(n%d==0)
        return false;
        d++;
    }
    return true;
}
int nrcif (int n)
{
    int gigel=0;
    while(n)
    {
        n=n/10;
        gigel++;
    }
    return gigel;
}
int main()
{
    int n,i,x,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(prim(x)==true)
        s=s+nrcif(x);
    }
    cout<<s;
    return 0;
}
