#include <fstream>

using namespace std;
ifstream in("ghiocel_2.0.in");
ofstream out("ghiocel_2.0.out");

int main()
{
    int n,b,i,u=0,c=0,d=0,v=0,ultimcif,semnmmic=0,semnmmare=0,cif=0,ultimcif2,ultimcif3,varf=0,adanc=0;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>b;
        while(b!=0)
        {
            cif++;
            ultimcif=b%10;
            ultimcif2=(b/10)%10;
            ultimcif3=(b/100)%10;
            if(ultimcif>ultimcif2) semnmmic++;
            if(ultimcif<ultimcif2) semnmmare++;
            if(b>=100)
            {
                if(ultimcif3<ultimcif2 && ultimcif2>ultimcif && varf==0)
                    varf++;
                if(ultimcif>ultimcif2 && ultimcif2<ultimcif && adanc==0)
                    adanc++;
            }
            b=b/10;
        }
        if(semnmmare==0 && semnmmic==cif-1 && semnmmic!=0)
            u++;
        if(semnmmic==0 && semnmmare==cif-1 && semnmmare!=0)
            c++;
        if(adanc==1 && varf==0 && (semnmmare+semnmmic==cif-1))
            v++;
        if(adanc==0 && varf==1 && (semnmmare+semnmmic==cif-1))
            d++;
        semnmmare=0;
        semnmmic=0;
        varf=0;
        adanc=0;
    }
    out<<u<<'\n'<<c<<'\n'<<d<<'\n'<<v;
    return 0;
}
