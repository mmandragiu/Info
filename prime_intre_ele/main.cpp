#include <iostream>

using namespace std;

int main()
{
    int a,b,r;
    cin>>a>>b;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    if(a==1)
    {
        cout<<"PIE";
    }
    else
    {
        cout<<"NOPIE";
    }
    return 0;
}
