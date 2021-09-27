#include <iostream>

using namespace std;

int main()
{
    int n,min=10,ultimcif;
    cin>>n;
    while(n!=0)
    {
        ultimcif=n%10;
        if(ultimcif<min && ultimcif%2==1)
        {
            min==ultimcif;
        }
        n=n/10;
    }
    if(min==10)
    {
        cout<<"nu exista cifre impare";
    }
    else
    {
     cout<<ultimcif;
    }
    return 0;
}
