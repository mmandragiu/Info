#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,n_pp=0,i=0,sum=0;
    cin>>n;
    while(n_pp!=n)
    {
        i++;
        if(sqrt(i)==(int)sqrt(i))
        {
            n_pp++;
            sum=sum+i;
        }
    }
    cout<<"Rezultatul este "<<sum;
    return 0;
}
