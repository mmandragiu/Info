#include <fstream>

using namespace std;
ifstream in ("pinochio.in");
ofstream out ("pinochio.out");

int main()
{
    int n,p,k,i,copien;
    in>>n>>p>>k;
    copien=n;
    for(i=1; i<=k; i++)
    {
        if(i%7==6 || i%7==0)
            copien=copien-1;
        else
            copien=copien+p;
    }
    out<<copien;

    return 0;
}
