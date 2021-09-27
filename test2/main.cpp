#include <iostream>

using namespace std;

int main()
{
    int N,cif,nrajutator=1,ultimcif,noul_N=0;
    cin>>N>>cif;
    while(N)
    {
        ultimcif=N%10;
        if(ultimcif!=cif)
        {
            noul_N=noul_N+ultimcif*nrajutator;
            nrajutator=nrajutator*10;
        }
        N=N/10;
    }
    cout<<noul_N;
    return 0;
}
