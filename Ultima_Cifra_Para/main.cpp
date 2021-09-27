#include <iostream>

using namespace std;

int main()
{
    int n,ultimcif;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif%2==0)
        {
            cout<<ultimcif;
            break;
        }
        n=n/10;
    }
    if(n==0)
    {
        cout<<-1;
    }
    return 0;
}
