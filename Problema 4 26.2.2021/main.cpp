#include <iostream>

using namespace std;

int main()
{
    long n,sumcif=0,ultimcif,ok=0;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        sumcif=sumcif+ultimcif;
        n=n/10;
    }
    while(ok==0 && sumcif>11)
    {
        if(sumcif%2==0)
        {
            ok=0;
        }
        else
        {
            ok=1;
        }
        sumcif=sumcif/2;
    }
    if(ok==0)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
