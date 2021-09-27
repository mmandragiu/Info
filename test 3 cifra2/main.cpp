#include <iostream>

using namespace std;

int main()
{
    int n,cif,nrajutator=1,noulN=0,ultimcif;
    cin>>n>>cif;
    while(n)
    {
        ultimcif=n%10;
        noulN=noulN+(ultimcif-cif)*nrajutator;
        nrajutator=nrajutator*10;
        n=n/10;
    }
    cout<<noulN;
    return 0;
}
