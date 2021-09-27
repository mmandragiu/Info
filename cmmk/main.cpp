#include <iostream>

using namespace std;

int main()
{
    int n,k,c=0;
    cin>>n>>k;
    if(n==0)
        cout<<"DA";
    while(n)
    {
        if(n%10<=k)
            c=1;
        else
        {
            c=2;
            break;
        }
        n=n/10;
    }
    if(c==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
