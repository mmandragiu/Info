#include <iostream>

using namespace std;

int main()
{
    unsigned int n,prod=1,ultimcif;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif%2==1)
        {
            prod=prod*ultimcif;
        }
        n=n/10;
    }
    if(prod==0)
        cout<<-1;
    else
        cout<<prod;
    return 0;
}
