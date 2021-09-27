#include <fstream>

using namespace std;
ifstream in("puteri.in");
ofstream out("puteri.out");
int main()
{
    long long u=1,nr=1,n;
    in>>n;
    while(u*2<=n)
    {
        u=u*2;
        nr++;
    }
    if(u<n)
        u++;
    else
        u=u/2+1;
    out<<nr<<'\n'<<u;
    return 0;
}
