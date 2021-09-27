#include <iostream>

using namespace std;

int main()
{
    int n,sumcif=0;
    cin>>n;
    while(n)
    {
        sumcif=sumcif+n%10;
        n=n/10;
    }
    cout<<sumcif;
    return 0;
}
