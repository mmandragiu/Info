#include <iostream>

using namespace std;

int main()
{
    unsigned short int n;
    int prod=1,i;
    cin>>n;
    if(n==0)
    cout<<1;
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    cout<<prod;
    return 0;
}
