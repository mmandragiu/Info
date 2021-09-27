#include <iostream>

using namespace std;

int main()
{
    int n,d,sumdiv=0;
    cin>>n;
    for(d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            if(d%2==0)
            sumdiv=sumdiv+d;
            if(d*d<n)
            {
                if((n/d)%2==0)
                    sumdiv=sumdiv+(n/d);
            }
        }
    }
    cout<<sumdiv;
    return 0;
}
