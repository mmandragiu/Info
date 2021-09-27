#include <iostream>

using namespace std;
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
    int a,b,c,d,numarator,numitor,numarator2,numitor2,goguta,cmmdcraport;
    cin>>a>>b>>c>>d;
    numarator=a*d-c*b;
    numitor=b*d;
    numarator2=a*d;
    numitor2=c*b;
    cmmdcraport=CMMDC(numarator2,numitor2);
    goguta=CMMDC(numarator,numitor);
    cout<<numarator/goguta<<"/"<<numitor/goguta<<" "<<numarator2/cmmdcraport<<"/"<<numitor2/cmmdcraport;
    return 0;
}
