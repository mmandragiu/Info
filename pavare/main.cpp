#include <iostream>

using namespace std;

int main()
{
    int a,b,r,C,L,copiea,copieb;
    cin>>a>>b;
    copiea=a;
    copieb=b;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    L=a;
    C=(copiea/a)*(copieb/a);
    cout<<C<<" "<<L;
    return 0;
}
