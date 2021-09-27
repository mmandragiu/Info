#include <iostream>

using namespace std;
int CMMDC(int a, int b)
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
    int n,a,b,cmmmc;
    cin>>n>>a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        int prod=a*b;
        cmmmc=prod/CMMDC(a,b);
        a=b;
    }
    cout<<cmmmc;
    return 0;
}
