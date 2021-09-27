#include <iostream>

using namespace std;
int main()
{
    int x,d,gasit=0;
    cin>>x;
    for(d=1;d<=x/2;d++)
    {
        if(x%d==0 && d%2==0)
        {
            gasit++;
        }

    }
    if(x%2==0)
    {
        cout<<gasit+1;
    }
    else
    {
        cout<<gasit;
    }
    return 0;
}
