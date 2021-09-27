#include <fstream>

using namespace std;
ifstream cin("culori.in");
ofstream cout("culori.out");

int main()
{
    int n,v[1000]={0},x,max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v[x]++;
        if(x>max)
            max=x;
    }
    for(int i=1;i<=max;i++)
        if(v[i]!=0)
            for(int i2=0;i2<v[i];i2++)
                cout<<i<<" ";
    return 0;
}
