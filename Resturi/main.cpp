#include <iostream>

using namespace std;

int main()
{
    int n,k,sumrest=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        sumrest=sumrest+i%k;
    }
    cout<<sumrest;
    return 0;
}
