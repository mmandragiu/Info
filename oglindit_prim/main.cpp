#include <iostream>

using namespace std;
bool prim(int n)
{
    int d=2;
    if(n<2)
    return false;
    while(d*d<=n)
    {
        if(n%d==0)
        return false;
        d++;
    }
    return true;
}

int main()
{

    int n,x,oglindit=0,suma=0,copiex;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        oglindit=0;
        copiex=x;
        while(x)
        {
            oglindit=oglindit*10+x%10;
            x=x/10;
        }
        if(prim(oglindit)==true)
        {
            suma=suma+copiex;
        }
    }
    cout<<suma;
    return 0;
}
