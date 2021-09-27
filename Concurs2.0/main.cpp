#include <fstream>

using namespace std;
ifstream in("concurs_2.0.in");
ofstream out("concurs_2.0.out");

int main()
{
    int C,N,E,P,i,max=-1,suma=0,nrc=0,sume1=0,sume2=0,sume3=0;
    in>>C>>N;
    if(C==1)
    {
        for(i=1; i<=N; i++)
        {
            in>>E>>P;
            while(P!=0)
            {
                if(P%10==0)
                {
                    suma=suma+10;
                    P=P/100;
                }
                else
                {
                    suma=suma+P%10;
                    P=P/10;
                }
            }
            if(suma>max)//cautam maximul
            {
                max=suma;
                nrc=1;
            }
            else
            {
                if(suma==max)
                    nrc++;
            }
            suma=0;
        }
        out<<max<<" "<<nrc;
    }
    if(C==2)
    {
        for(i=1;i<=N;i++)
        {
            in>>E>>P;
            while(P!=0)
            {
                if(P%10==0)
                {
                    suma=suma+10;
                    P=P/100;
                }
                else
                {
                    suma=suma+P%10;
                    P=P/10;
                }
            }
            if(E==1)
                sume1=sume1+suma;
            if(E==2)
                sume2=sume2+suma;
            if(E==3)
                sume3=sume3+suma;
            suma=0;
        }
        if(sume1==0 and sume2==0 and sume3==0)
            out<<"FARA CAMPION";
        if(sume1==sume2 and sume2==sume3 and sume1!=0)
            out<<1<<" "<<2<<" "<<3<<" "<<sume1;
        if(sume1==sume2 and sume2>sume3)
            out<<1<<" "<<2<<" "<<sume1;
        if(sume1==sume3 and sume1>sume2)
            out<<1<<" "<<3<<" "<<sume1;
        if(sume2==sume3 and sume2>sume1)
            out<<2<<" "<<3<<" "<<sume2;
        if(sume1>sume2 and sume1>sume3)
            out<<1<<" "<<sume1;
        if(sume2>sume1 and sume2>sume3)
            out<<2<<" "<<sume2;
        if(sume3>sume1 and sume3>sume2)
            out<<3<<" "<<sume3;
    }
    return 0;
}
