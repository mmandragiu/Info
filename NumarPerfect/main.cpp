#include <iostream>

using namespace std;

int main()
{
    int n,sumdiv=0;
    cin>>n;
    for(int d=1;d*d<=n;d++)
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
    if(n*2==sumdiv)
    {
        cout<<n<<" este perfect";
    }
    else
    {
        cout<<n<<" nu este perfect";
    }
    return 0;
}
