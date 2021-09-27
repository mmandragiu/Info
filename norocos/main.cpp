#include <fstream>

using namespace std;
ifstream in("norocos.in");
ofstream out("norocos.out");
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d*d <=n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}
bool k_norocos(int n,int k)
{
    int contor = 0;
    int copien = n;
    int pd = 0;
    for (int d = 2; d * d <= copien; d++)
    {
        if (n % d == 0 && prim(d) == true)
        {
            contor++;
            pd = n/d;
            if (d < pd && prim(pd)==true)
            {
                contor++;
                return contor == k;
            }
            else
                n = pd;
        }
        if (contor == k)
            return n == 1;
    }
    return false;
}

int main()
{
    long long C,N,x,k,min=2000000001,max=0,k_norocoase=0;
    in>>C>>N>>k;
    if(C==1)
    {
        for(int i=1;i<=N;i++)
        {
            in>>x;
            if(x>max && (x*x)%2==1)
                max=x;
            if(x<min && (x*x)%2==1)
                min=x;
        }
        if(max==0 && min==2000000001)
            out<<0;
        if(max ==0 && min!=2000000001)
            out<<min<<" "<<min;
        if(max!=0 && min==2000000001)
            out<<max<<" "<<max;
        if(max!=0 && min!=2000000001)
            out<<min<<" "<<max;
    }
    if(C==2)
    {
        for(int i=1;i<=N;i++)
        {
            in>>x;
            if(k_norocos(x,k)==true)
                k_norocoase++;
        }
        out<<k_norocoase;
    }
    return 0;
}
