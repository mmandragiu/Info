#include <fstream>

using namespace std;
ifstream in("bancomat.in");
ofstream out("bancomat.out");

int main()
{
    long long S,n,i,v;
    in>>S>>n;
    for(i=1; i<=n; i++)
    {
        in>>v;
        if(v%10==2)
            S=S+v/10;
        if(v%10==3 && S>(v/10))
            S=S-v/10;
    }
    out<<S;
    return 0;
}
