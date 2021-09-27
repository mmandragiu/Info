#include <fstream>

using namespace std;
ifstream in("fractie.in");
ofstream out("fractie.out");
int CMMDC(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int a,b,nr2=0,nr5=0,lungime=0,copiea,copieb,r;
    in>>a>>b;
    copiea=a;
    a=a/CMMDC(a,b);
    b=b/CMMDC(copiea,b);
    copieb=b;
    while(copieb%2==0)
    {
        nr2++;
        copieb=copieb/2;
    }
    while(copieb%5==0)
    {
        nr5++;
        copieb=copieb/5;
    }
    lungime=max(nr2,nr5);
    out<<"0.";
    while(lungime)
    {
        a=a*10;
        out<<a/b;
        a=a%b;
        lungime--;
    }
    if(a%b!=0)
    {
        out<<"(";
        a=a%b;
        r=a;
        a=a%b;
        do
        {
            a=a*10;
            out<<a/b;
            a=a%b;
        }
        while(a!=r);
        out<<")";
    }
    return 0;
}
