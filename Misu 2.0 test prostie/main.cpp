#include <iostream>
#include <cmath>

using namespace std;
int prim(long k)
{
    long i;
    if(k==0 || k==1)
        return 0;
    else
    {
        for(i=2;i<=sqrt(k);i++)
        {
            if(k%i==0)
                return 0;
        }
    }

}

int main()
{
    cout<<prim(13);
    return 0;
}
