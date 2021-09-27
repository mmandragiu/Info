#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,nrdiv=0,d,s=0;
    double medie=0;
    cin>>n;
    for(d=1;d*d<=n;d++)
    {
        if(n%d==0)
        {
            s=s+d;
            nrdiv++;
            if(d*d<n)
            {
                s=s+n/d;
                nrdiv++;
            }
        }
    }
    medie=(double)s/nrdiv;
    printf("%.2f",medie);
    return 0;
}
