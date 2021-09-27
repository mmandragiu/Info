#include <iostream>

using namespace std;

int main()
{
    int n,primcif,ultimcif,copien,uc,sumcif=0,prodcif=1;
    cin>>n;
    copien=n;
    ultimcif=n%10;
    while(n)
    {
        if(n<10)
        {
            primcif=n;
        }
        n=n/10;
    }
    while(copien)
    {
        uc=copien%10;
        if(uc!=ultimcif && uc!=primcif)
        {
            sumcif=sumcif+uc;
            prodcif=prodcif*uc;
        }
        copien=copien/10;
    }
    cout<<sumcif<<" "<<prodcif;
    return 0;
}
