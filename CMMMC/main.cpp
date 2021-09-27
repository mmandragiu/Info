#include <iostream>

using namespace std;

int main()
{
    int a,b,r,copiea=a,copieb=b,cmmmc;
    cin>>a>>b;
    while (b)
    {
        r=a%b;
        copiea=copieb;
        copieb=r;
    }
    cmmmc=a*b/copiea;
    cout<<cmmmc;
    return 0;
}
