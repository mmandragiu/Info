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

int main()
{
    int x;
    cin>>x;
    if(prim(x)==true)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
