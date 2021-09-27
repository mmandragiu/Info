#include <iostream>

using namespace std;

int main()
{
    int n,d,gasit=0;
    cin>>n;
    for(d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            if(d%2 == 0) gasit++;
            if(d * d < n) {
                if((n/d) %2 == 0) gasit++;
            }

        }
    }
    cout<<gasit;
    return 0;
}
