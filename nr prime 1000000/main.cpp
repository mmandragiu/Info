#include <iostream>

using namespace std;

bool Prim(int n)
{
    int d=2;
    if(n < 2)
        return false;
    while(d*d<=n)
    {
        if(n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int c=0;
    for(int i=1;i<=1000000;i++)
    {
        if(Prim(i)==true)
            c++;
    }
    cout<<c;
    return 0;
}
