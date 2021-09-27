#include <fstream>

using namespace std;
ifstream in("panglica.in");
ofstream out("panglica.out");

int main()
{
    int n,C,x,prima_aparitie[201],ultima_aparitie[201],difmax=1,culoaremax=0,taiatstanga=0,taiatdreapta=0;
    in>>n>>C;
    for(int i=1;i<=200;i++)
    {
        prima_aparitie[i]=0;
        ultima_aparitie[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        in>>x;
        if(prima_aparitie[x]==0)
        {
            prima_aparitie[x]=i;
        }
        ultima_aparitie[x]=i;
    }
    for(int culoare=1;culoare<=200;culoare++)
    {
        if(prima_aparitie[culoare]!=0)
        {
            int dif=ultima_aparitie[culoare]-prima_aparitie[culoare]+1;
            if(dif>difmax)
            {
                difmax=dif;
                culoaremax=culoare;
            }
        }
    }
    taiatstanga=prima_aparitie[culoaremax]-1;
    taiatdreapta=n-ultima_aparitie[culoaremax];
    out<<difmax<<'\n'<<culoaremax<<'\n'<<taiatstanga<<'\n'<<taiatdreapta;
    return 0;
}
