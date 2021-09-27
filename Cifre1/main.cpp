#include <fstream>

using namespace std;
ifstream in("cifre1.in");
ofstream out("cifre1.out");
void sortareVector(int v[], int n)
{
    for(int i =0; i < n-1; i++)
        for(int j = i+1; j< n; j++)
            if(v[j]<v[i])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }

}

int main()
{
    int a,b,copiea,copieb,ultimcifa,ultimcifb,cifa[50],cifb[50],cifrea=0,cifreb=0,CelMMNumar[10],afisare=0,CifComune[10]={0};
    in>>a>>b;
    copiea=a;
    copieb=b;
    for(int i=0;i<10;i++)
    {
        CelMMNumar[i]=0;
    }
    while(a!=0)
    {
        ultimcifa=a%10;
        cifa[cifrea]=ultimcifa;
        cifrea++;
        a=a/10;
    }
    while(b!=0)
    {
        ultimcifb=b%10;
        cifb[cifreb]=ultimcifb;
        cifreb++;
        b=b/10;
    }
    sortareVector(cifa,cifrea);
    sortareVector(cifb,cifreb);
    //Scoatem cifrele comune
    for(int i=0;i<cifrea;i++)
    {
        for(int i2=0;i2<cifreb;i2++)
        {
            if(cifa[i]==cifb[i2])
            {
                CifComune[cifa[i]]++;
                afisare=1;
            }
        }
    }
    if(afisare==0)
    {
        out<<-1;
    }
    else
        for(int i=0;i<10;i++)
        {
            if(CifComune[i]!=0)
            {
                out<<i<<" ";
            }
        }
    out<<'\n';
    //Contorizam aparitiile fiecarei cifre intr-un vector
    while(copiea!=0)
    {
        ultimcifa=copiea%10;
        CelMMNumar[ultimcifa]++;
        copiea=copiea/10;
    }
    while(copieb!=0)
    {
        ultimcifb=copieb%10;
        CelMMNumar[ultimcifb]++;
        copieb=copieb/10;
    }
    for(int i3=9;i3>=0;i3--)
    {
        if(CelMMNumar[i3]!=0)
        {
            for(int i4=1;i4<=CelMMNumar[i3];i4++)
            {
                out<<i3;
            }
        }
    }
    return 0;
}
