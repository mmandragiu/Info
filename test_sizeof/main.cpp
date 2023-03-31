#include <iostream>

using namespace std;

int main()
{
    int i,j, t = 0;
    for (i = 1; i <= x[0]; i++)
        if(x[i]>=y[i])
            x[i]-=y[i];
        else
        {
            j=i+1;
            while(x[j]==0)
                x[j++]=9;
            x[j]--;
            x[i]=10+x[i]-y[i];
        }
    return 0;
}
