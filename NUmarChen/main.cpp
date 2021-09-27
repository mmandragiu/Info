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
int semiprim(int n)
{
    int d,divprim=0;
    for(d=1;d*d<=n;d++)
    {
        if(prim(d)==true && n%d==0)
        {
            divprim++;
            if(d*d<n)
            {
                if(prim(n/d)==true)
                divprim++;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(prim(i)==true || semiprim(i+2)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
