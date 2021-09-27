#include <iostream>

using namespace std;

int main()
{
    unsigned short int n,i;
    int argint,aur,rubin, taur, targint, trubin;
    cin>>n;
    i=2;
    argint=1;
    aur=1;
    rubin=1;

    while(i<=n+3)
    {
        taur = aur;
        targint = argint;
        trubin = rubin;

        aur=aur+targint;
        rubin=rubin+targint;

        argint=argint+taur;
        rubin=rubin+taur;
        aur=0;

        aur=aur+trubin;
        i++;

    }
    cout<<argint<<" "<<aur<<" "<<rubin;

    return 0;
}
