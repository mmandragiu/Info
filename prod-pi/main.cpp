#include <iostream>

using namespace std;

int main()
{
    int n,copien,ultimcif,min=10,max=0;
    cin>>n;
    copien=n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif<min && ultimcif%2==1)
        {
            min=ultimcif;
        }
        n=n/10;
    }
    while(copien)
    {
        ultimcif=copien%10;
        if(ultimcif>max && ultimcif%2==0)
        {
            max=ultimcif;
        }
        copien=copien/10;
    }
    cout<<min*max;
    return 0;
}
