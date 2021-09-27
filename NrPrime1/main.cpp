#include <iostream>

using namespace std;
bool prim (int n)
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
    int n,x=0,c=0;
    cin>>n;
    while(x!=n)
    {
        if(prim(x)==true)
        {
            cout<<x<<" ";
            c++;
        }
        x++;
    }
    return 0;
}
