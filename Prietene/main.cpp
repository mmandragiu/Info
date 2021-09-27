#include <iostream>

using namespace std;

int main()
{
    int a,b,sumdiva=0,sumdivb=0,d;
    cin>>a>>b;
    for(d=1;d*d<=a;d++)
    {
        if(a%d==0)
        {
            sumdiva=sumdiva+d;
            if(d*d<a)
            {
                sumdiva=sumdiva+a/d;
            }
        }
    }
    for(int div=1;div*div<=b;div++)
    {
        if(b%div==0)
        {
            sumdivb=sumdivb+div;
            if(div*div<b)
            {
                sumdivb=sumdivb+b/div;
            }
        }
    }
    if(a==(sumdivb-b) && b==(sumdiva-a))
    {
        cout<<"PRIETENE";
    }
    else
    {
        cout<<"NU SUNT PRIETENE";
    }
    return 0;
}
