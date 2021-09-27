#include <fstream>

using namespace std;
ifstream in("cub1.in");
ofstream out("cub1.out");

int main()
{
    int n,x,v[11],max=0,culori=0;
    in>>n;
    for(int i=1;i<=10;i++)
    {
        v[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        in>>x;
        v[x]++;
    }
    for(int i=1;i<=10;i++)
    {
        if(v[i]!=0)
        {
            culori++;
        }
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    out<<culori<<'\n';
    for(int i=1;i<=10;i++)
    {
        if(v[i]==max)
        {
            out<<i<<" ";
        }
    }
    return 0;
}
