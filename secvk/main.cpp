#include <fstream>

using namespace std;

ifstream in("secvk.in");
ofstream out("secvk.out");

const int N=1e5;
int v[N+1],n,k,x[N+1],s[N+1],st,dr;

int main()
{
    int smax=-1;
    in>>n>>k;
    for(int i=1;i<=n;i++)
    {
        in>>v[i];
        s[i]=s[i-1]+v[i];
        if(i>=k)
        {
            if(s[i]-s[i-k]>smax)
            {
                smax=s[i]-s[i-k];
                dr=i;
            }
        }
    }
    st=dr-k+1;
    for(int i=st;i<=dr;i++)
        out<<v[i]<<" ";
    in.close();
    out.close();
    return 0;
}
