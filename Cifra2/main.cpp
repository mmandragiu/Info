#include <fstream>

using namespace std;
ifstream in("cifra2.in");
ofstream out("cifra2.out");

int main()
{
    int N,ultimcif,MIN=10,nr_ajutator=1,copieN;
    in>>N;
    copieN=N;
    while(N!=0)//aflam cifra cea mai mica
    {
        ultimcif=N%10;
        if(ultimcif<MIN)
        {
            MIN=ultimcif;
        }
        N=N/10;
    }
    out<<MIN<<'\n';

    while(copieN!=0)//eliminam cifra cea mai mica
    {
        ultimcif=copieN%10;
        if(ultimcif!=MIN)
        {
            N=N+ultimcif*nr_ajutator;
            nr_ajutator=nr_ajutator*10;
        }
        copieN=copieN/10;

    }
    nr_ajutator=1;
    while(N!=0)//modificam fiecare cif a nr cu cif cea mai mica
    {
        ultimcif=N%10;
        copieN=copieN+(ultimcif-MIN)*nr_ajutator;
        nr_ajutator=nr_ajutator*10;
        N=N/10;
    }
    MIN=10;
    N=copieN;//N,copieN=6258
    out<<copieN<<'\n';
    nr_ajutator=1;
    while(copieN>10 && N!=0)
    {
        while(N!=0)//aflam cifra cea mai mica
        {
            ultimcif=N%10;
            if(ultimcif<MIN)
            {
                MIN=ultimcif;
            }
            N=N/10;
        }
        while(copieN!=0)//eliminam cifra cea mai mica
        {
            ultimcif=copieN%10;
            if(ultimcif!=MIN)
            {
                N=N+ultimcif*nr_ajutator;
                nr_ajutator=nr_ajutator*10;
            }
            copieN=copieN/10;

        }
        nr_ajutator=1;
        while(N!=0)//modificam fiecare cif a nr cu cif cea mai mica
        {
            ultimcif=N%10;
            copieN=copieN+(ultimcif-MIN)*nr_ajutator;
            nr_ajutator=nr_ajutator*10;
            N=N/10;
        }
        nr_ajutator=1;
        N=copieN;
    }
    out<<copieN;

    return 0;
}
