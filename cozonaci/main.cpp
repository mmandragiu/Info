#include <fstream>

using namespace std;
ifstream in("cozonaci.in");
ofstream out("cozonaci.out");

int main()
{
    int f,q,s=0,c,d,r;
    short int n;
    in>>n;
    for(short int i=1; i<=n; i++)
    {
        in>>f>>q;
        c=f-q;
        s=s+c;
        if(i>1)
        while(d)
        {
            r=c%d;
            c=d;
            d=r;
        }

        d=c;

    }
    out<<s<<'\n'<<d;
    return 0;
}
