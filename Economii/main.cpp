#include <fstream>

using namespace std;
ifstream fin("economii.in");
ofstream fout("economii.out");

int main()
{
    int n,k,p,i,copiek,suma;
    fin>>n>>k>>p;
    copiek=0;
    suma=0;
    for(i=1; i<=n; i++)
    {
        if(i%7==1)
            copiek=k;
        else
            copiek+=k;

        if(i%7==0)
            suma=suma-p;
        else
            suma=suma+copiek;
    }
    fout<<suma;
    return 0;
}
