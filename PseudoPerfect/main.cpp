#include <iostream>

using namespace std;

int main()
{
    int n,sumdiv=0,d;
    cin>>n;
    for(d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            sumdiv=sumdiv+d;
            if(d*d<n)
            {
                sumdiv=sumdiv+n/d;
            }
        }
    }
    if(sumdiv%n==0)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
