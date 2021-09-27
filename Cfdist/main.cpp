#include <fstream>

using namespace std;
ifstream cin("cfdist.in");
ofstream cout("cfdist.out");

int main()
{
    int n,v[10]={0},cifmax=-1,cifdist=0;
    cin>>n;
    while(n)
    {
        v[n%10]++;
        if(n%10>cifmax)
            cifmax=n%10;
        n=n/10;
    }
    for(int i=0;i<=cifmax;i++)
        if(v[i]!=0)
            cifdist++;
    cout<<cifdist;
    return 0;
}
