#include <iostream>

using namespace std;
int main()
{
    int n,ultimcif,cifprim=0,ciftotal=0;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif==2 || ultimcif==3 || ultimcif==5 || ultimcif==7)
        {
            cifprim++;
        }
        ciftotal++;
        n=n/10;
    }
    if(cifprim==ciftotal)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
