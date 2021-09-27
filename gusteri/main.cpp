#include <iostream>
#include <fstream>

using namespace std;
ifstream in("gusteri.in");
ofstream out("gusteri.out");

int main()
{
    int n,p,m,a,b;
    in>>n>>p>>m>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if(i==1)
            n=n;
        else
            n=(n*p)%m;
    }
    out<<n<<'\n';
    for(int i2=a+1;i2<=b;i2++)
    {
        n=(n*p)%m;
        out<<n<<'\n';
    }
    return 0;
}
