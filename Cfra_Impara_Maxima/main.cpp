#include <iostream>

using namespace std;

int main()
{
    int n,max=0,ultimcif;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif>max && ultimcif%2==1)
        {
            max=ultimcif;
        }
        n=n/10;
    }
    if(max==0)
    {
        cout<<"nu exista";
    }
    else
    {
        cout<<max;
    }
    return 0;
}
