#include <iostream>

using namespace std;

int prim(int n)
{
    int d,div=0;
    for(d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            div++;
            if(d*d<n)
            {
                div++;
            }
        }
    }
    if(div==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    if(prim(n)==1)
    {
        cout<<"prim";
    }
    else
        cout<<"nu este prim";
}
