#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,d,gasit=0;
    cin>>n;
    for(d=1;d<=n;d++)
    {
        if(n%d==0 && sqrt(d)==(int)sqrt(d))
        {
            gasit++;
        }
    }
    cout<<gasit;
    return 0;
}
