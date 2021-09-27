#include <fstream>

using namespace std;
ifstream in("ghiocel.in");
ofstream out("ghiocel.out");

int main()
{
    unsigned long long n,b,urcus=0,coboras=0,deal=0,vale=0,ultimcif,v[19],semnmmare=0,semnmmic=0,cifb=0,varf=0,adanc=0;
    in>>n;
    for(unsigned int i=1; i<=n; i++)
    {
        in>>b;
        cifb=0;
        while(b!=0)
        {
            ultimcif=b%10;
            v[cifb]=ultimcif;
            b=b/10;
            cifb++;
        }
        for(unsigned int i2=cifb-1;i2>0;i2--)
        {
            if(v[i2]>v[i2-1])
                semnmmare++;
            if(v[i2]<v[i2-1])
                semnmmic++;
            if(v[i2]>v[i2-1] && v[i2]>v[i2+1] && varf==0 && i2 <cifb-1)
                varf++;
            if(v[i2]<v[i2-1] && v[i2]<v[i2+1] && adanc==0 && i2<cifb-1)
                adanc++;
        }
        if(semnmmare==0 && semnmmic!=0 && (semnmmic == cifb - 1))
        {
            urcus++;
        }
        if(semnmmic==0 && semnmmare!=0 && (semnmmare == cifb - 1))
        {
            coboras++;
        }
        if(adanc==1 && varf==0 && (semnmmic + semnmmare == cifb - 1))
            vale++;
        if(varf==1 && adanc==0 && (semnmmic + semnmmare == cifb - 1))
            deal++;
        semnmmare=0;
        semnmmic=0;
        varf=0;
        adanc=0;
    }
    out<<urcus<<'\n'<<coboras<<'\n'<<deal<<'\n'<<vale;
    return 0;
}
