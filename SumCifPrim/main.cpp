#include <iostream>

using namespace std;
bool prim(int n)
{
    int d=2;
    if(n<2)
    {
        return false;
    }
    while(d*d<=n)
    {
        if(n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n,x,sumcif,copiex,C=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        copiex=0;
        cin>>x;
        sumcif=0;
        copiex=x;
        while(x)
        {
            sumcif=sumcif+x%10;
            x=x/10;
        }
        if(prim(copiex)==true && prim(sumcif)==true)
        {
            C++;
        }
    }
    cout<<C;
    return 0;
}
