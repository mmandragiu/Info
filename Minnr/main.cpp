#include <fstream>
#include <algorithm>

using namespace std;
ifstream cin("minnr.in");
ofstream cout("minnr.out");

int main()
{
    int n,v[11]={0},cif=0;
    cin>>n;
    while(n)
    {
        v[n%10]++;
        if(n%10>cif)
            cif=n%10;
        n=n/10;
    }
    if(v[0]!=0)
    {
        for(int i=1;i<=cif;i++)
        {
            if(v[i]!=0)
            {
                cout<<i;
                v[i]--;
                break;
            }
        }
        for(int i=0;i<=cif;i++)
        {
            for(int i2=0;i2<v[i];i2++)
                cout<<i;
        }
    }
    else
        for(int i=0;i<=cif;i++)
            if(v[i]!=0)
                for(int i2=0;i2<v[i];i2++)
                    cout<<i;
    return 0;
}
