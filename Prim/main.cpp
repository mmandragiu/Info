#include <fstream>

using namespace std;
ifstream in("prim.in");
ofstream out("prim.out");

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
    unsigned int n,k,nrprime=0,v[10000], start, stop, nrElementeAfisat;
    in>>n>>k;

    for(int i=2; i<=n; i++)
    {
        if(prim(i)==true)
        {
            v[nrprime]=i;
            nrprime++;
        }
    }
    if(nrprime%2==0)
        nrElementeAfisat = 2*k;
    else
        nrElementeAfisat = 2*k - 1;

    if(nrElementeAfisat < nrprime)
    {
        start=(nrprime-nrElementeAfisat)/2;
        stop=start+nrElementeAfisat;
    }
    else
    {
        start = 0;
        stop = nrprime;
    }

    for(int i=start; i<stop; i++)
    {
        out<<v[i]<<" ";
    }

    return 0;
}
