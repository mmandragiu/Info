#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    int r;
     while(b)
        {
            r=a%b;
            a=b;
            b=r;
        }
    return a;
}

int main()
{
    int a,b,n,r,cmmdc;
    cin>>n>>a;
    cmmdc = a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        cmmdc = cmmdc(cmmdc, b);
    }
    cout<<cmmdc;
    return 0;
}
