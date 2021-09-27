#include <fstream>

using namespace std;
ifstream in("nrapprime.in");
ofstream out("nrapprime.out");
bool prim(int n)
{
    int d=2;
    if(n<2)
    {
        return false;
    }
    while(d*d<=n)
    {
        if(n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n,x,nr=0;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        if(prim(x)==true)
        {
            nr++;
        }
    }
    out<<nr;
    return 0;
}
