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
    int n,x,copie2i,sumcif=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int copiei=i;
        copie2i=i;
        while(copiei)
        {
            sumcif=sumcif+copiei%10;
            copiei=copiei/10;
        }
        if(prim(copie2i)==true and prim(sumcif)==true)
                cout<<copie2i<<" ";
        sumcif=0;
    }
    if(prim(n)==true)
        cout<<n;
    return 0;
}
