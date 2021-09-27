#include <iostream>

using namespace std;

int main()
{
    long long n,i;
    long long argint,aur,rubin, taur, targint, trubin;
    cin>>n;
    i=3;
    argint=1;
    aur=1;
    rubin=1;

    while(i<=n+4)
    {
        taur = aur;
        targint = argint;
        trubin = rubin;

        argint = targint+taur;
        aur=targint+trubin;
        rubin = targint + taur+trubin;
        i++;

    }
    cout<<argint<<" "<<aur<<" "<<rubin;

    return 0;
}
