#include <fstream>

using namespace std;
ifstream in("numere3.in");
ofstream out("numere3.out");

int main()
{
    int n,x,s_cif_min=0,cifmin=10,cifmax=0,noulx=0,copiex,aparitie=0,p=1;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        cifmin=x%10;
        s_cif_min=s_cif_min+cifmin;
        x=x/10;
        copiex=x;
        while(x!=0)
        {
            if(x%10>cifmax)
            {
                cifmax=x%10;
            }
            x=x/10;
        }
        while(copiex!=0)
        {
            if(copiex%10==cifmax && aparitie==0)
            {
                noulx=noulx+cifmin*p;
                aparitie++;
            }
            else
                noulx=noulx+(copiex%10)*p;
            copiex=copiex/10;
            p=p*10;
        }
        out<<noulx<<'\n';
        cifmin=10;
        cifmax=0;
        noulx=0;
        p=1;
        aparitie=0;
    }
    out<<s_cif_min;
    return 0;
}
