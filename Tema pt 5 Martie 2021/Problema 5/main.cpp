#include <iostream>

using namespace std;

int main()
{
    int n,cifpare=0,ultimcif;
    cin>>n;
    while(n)
    {
        ultimcif=n%10;
        if(ultimcif%2==0)
        {
            cifpare++;
        }
        else
        {
            break;
        }
        n=n/10;
    }
    cout<<cifpare;
    return 0;
}
