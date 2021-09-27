#include <fstream>

using namespace std;
ifstream cin("zone.in");
ofstream cout("zone.out");

int main()
{
    int n,v[301],ultim_impar=0,prim_par=-1,poz_i=-1,poz_p=-1;
    cin>>n;
    for(int i=1;i<=3*n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        if(v[i]%2==0)
        {
            prim_par=v[i];
            poz_p=i;
            break;
        }
    for(int i=3*n;i>=2*n+1;--i)
        if(v[i]%2==1)
        {
            ultim_impar=v[i];
            poz_i=i;
            break;
        }
    if(prim_par!=-1 and ultim_impar!=0)
        swap(v[poz_p],v[poz_i]);
    for(int i=1;i<=3*n;i++)
        cout<<v[i]<<" ";
    return 0;
}
