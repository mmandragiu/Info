#include <fstream>

using namespace std;
ifstream in("puteri.in");
ofstream out("puteri.out");
bool putere2(int x)
{
    int ok=0;
    while(x!=1)
    {
        if(x%2==0)
        {
            ok=1;
            x=x/2;
        }
        else
        {
          ok=0;
          x=x/2;
        }
    }
    if(ok==1)
        return true;
    else
        return false;
}

int main()
{
    long long n,i,max=-1,min=2000000001,nr=0;
    in>>n;
    for(i=1;i<=n;i++)
        if(putere2(i)==true)
            nr++;
    out<<nr;
    return 0;
}
