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
    int a,b,c=0;
    cin>>a>>b;
    if(a>b)
    {
        for(int iterator=b; iterator<=a; iterator++)
        {
            if(prim(iterator)==true)
            {
                c++;
            }
        }
        cout<<c;
    }
    else
    {
        for(int i=a; i<=b; i++)
        {
            if(prim(i)==true)
            {
                c++;
            }
        }
        cout<<c;
    }
    return 0;
}
