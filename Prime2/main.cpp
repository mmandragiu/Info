#include <iostream>

using namespace std;

int main()
{
    int n,x,C=0,div=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        for(int iterator=1;iterator*iterator<=x;iterator++)
        {
            if(x%iterator==0)
            {
                div++;
                if(iterator*iterator<x)
                {
                    div++;
                }
            }
        }
        if(div==2)
        {
            C++;
        }
        div=0;
    }
    cout<<C;
    return 0;
}
