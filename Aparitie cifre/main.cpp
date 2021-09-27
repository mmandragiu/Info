#include <fstream>
#include <iostream>

using namespace std;
ifstream in("Aparitie_cifre.in");
ofstream out("Aparitie_cifre.out");

void afisare(int vector[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(vector[i]!=0)
        {
            out<<i<<" "<<vector[i]<<'\n';
        }
    }
}

int main()
{
    int v[10],n,ultimcif;
    in>>n;
    for(int iterator=0;iterator<=9;iterator++)
    {
        v[iterator]=0;
    }
    if(n==0)
    {
        v[0]=1;
    }
    if(n<0)
    {
        n=-n;
    }
    while(n!=0)
    {
        ultimcif=n%10;
        v[ultimcif]++;
        n=n/10;
    }

    afisare(v, 10);

    return 0;
}


