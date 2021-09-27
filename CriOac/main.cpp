#include <fstream>

using namespace std;
ifstream in("crioac.in");
ofstream out("crioac.out");

int main()
{
    int N,X,Y,Soac=0,Scri=0;
    in>>N>>X>>Y;
    if((N+1)%X==0)
        Scri=(N+1)/X;
    else
        Scri=(N+1)/X+1;
    if((N+1)%Y==0)
        Soac=(N+1)/Y;
    else
        Soac=(N+1)/Y+1;
    if(Scri>Soac)
        out<<Soac<<'\n';
    else
        out<<Scri<<'\n';
    if((N+1)%(X+Y)==0)
    {
        out<<((N+1)/(X+Y))*X;
    }
    else
    {
        out<<0;
    }
    return 0;
}
