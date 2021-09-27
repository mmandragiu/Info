#include <iostream>

using namespace std;

int main()
{
    unsigned int n,k,P=1,ultimcif,cifegale=0,ciftotal=0;
    cin>>n>>k;
    while(n)
    {
        ultimcif=n%10;
        ciftotal++;
        if(ultimcif!=k)
        {
            P=P*ultimcif;
        }
        if(ultimcif==k)
        {
            cifegale++;
        }
        n=n/10;
    }
    if(cifegale==ciftotal)
    {
        cout<<0;
    }
    else
    {
        cout<<P;
    }
    return 0;
}
