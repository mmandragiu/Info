#include <fstream>

using namespace std;
ifstream cin("iepuras.in");
ofstream cout("iepuras.out");
int SumCif(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}

int main()
{
    unsigned long long int c,n,x,v[100]={0},cif=0,noulx=0,suma=0,sumnr=0,nrap=0,cifmin=-1;
    cin>>c>>n;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            while(x>0)
            {
                cif++;
                if(x%10==0)
                    v[0]=1;
                else
                    v[x%10]=x%10;
                x=x/10;
            }
            for(int i2=9;i2>=1;i2--)
                if(v[i2]!=0)
                    noulx=noulx*10+v[i2];
            if(v[0]==1)
                noulx=noulx*10;
            suma+=noulx;
            noulx=0;
            if(v[0]==0)
            {
                for(int i2=1;i2<=9;i2++)
                    if(v[i2]!=0)
                        noulx=noulx*10+v[i2];
            }
            else
            {
                for(int i2=1;i2<=9;i2++)
                    if(v[i2]!=0)
                    {
                        cifmin=i2;
                        v[i2]--;
                        break;
                    }
                    noulx=noulx+cifmin*10;
                for(int i2=1;i2<=9;i2++)
                    if(v[i2]!=0)
                        noulx=noulx*10+v[i2];
            }
            suma+=noulx;
            cout<<suma<<'\n';
            for(int i2=0;i2<100;i2++)
                v[i2]=0;
            cif=0;
            suma=0;
            noulx=0;
        }
    }
    if(c==2)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            sumnr=SumCif(x);
            while(sumnr>9)
                sumnr=SumCif(sumnr);
            for(int i2=1;i2<=x;i2++)
            {
                int copiei2=i2;
                while(i2)
                {
                    if(i2%10==sumnr)
                       nrap++;
                    i2=i2/10;
                }
                i2=copiei2;
            }
            cout<<nrap<<'\n';
            nrap=0;
        }
    }
    return 0;
}
