#include <iostream>

using namespace std;

int main()
{
    int n,sumcif=0,cifsum=0;
    cin>>n;
    while(n)
    {
        sumcif=sumcif+n%10;
        n=n/10;
    }
    while(sumcif)
    {
        cifsum++;
        sumcif=sumcif/10;
    }
    cout<<cifsum;
    return 0;
}
