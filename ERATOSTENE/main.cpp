#include <iostream>
#include <cmath>

using namespace std;

int Eratostene[1000000];

int main()
{
    int prime=0;
    Eratostene[0]=1,Eratostene[1]=1;
    for(int i=2;i<sqrt(10000000);i++)
    {
        if(Eratostene[i]==0)
        {
            for(int j=i*i;j<=1000000/i;j=j*i)
                Eratostene[j]=1;
            prime++;
        }
    }
    cout<<prime;
    return 0;
}
