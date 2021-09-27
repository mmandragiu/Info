#include <iostream>

using namespace std;

int main()
{
    int n,a,b,v[100]={0},d=1,p,factori2=0,factori5=0,factori_dif=0,x;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        cin>>x;
        v[i]=x;
    }
    for(int i=2;i<=2*n;i=i+2)
    {
        factori2=0;
        factori5=0;
        factori_dif=0;
        if(v[i-1]%v[i]==0)
        {
            cout<<"fractie finita"<<'\n';
            continue;
        }
        else{
        for(d=1;d*d<=v[i];d++)
        {
            if(v[i]%d==0)
            {
                if(d%2==0)
                    factori2++;
                if(d%5==0)
                    factori5++;
                if(d%2!=0 and d%5!=0 and d!=1)
                factori_dif++;
                if(d*d<v[i])
                {
                    if((v[i]/d)%2==0)
                        factori2++;
                    if((v[i]/d)%5==0)
                        factori5++;
                    if((v[i]/d)%2!=0 and (v[i]/d)%5!=0)
                        factori_dif++;
                }
            }
        }
        if(factori_dif==0)
            cout<<" fractie finita"<<'\n';
        else{
            if(factori2==0 and factori5==0)
                cout<<"fractie periodica simpla"<<'\n';
            else
                cout<<"fractie periodica mixta"<<'\n';
        }
        }
    }
    return 0;
}
