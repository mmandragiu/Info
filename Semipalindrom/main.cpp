#include <iostream>
#include <fstream>

using namespace std;
ifstream in("semipalindrom.in");
ofstream out("semipalindrom.out");

int main()
{
    long long n,cif=0,v[9],noul_n=0, start, copien;
    bool ok=true;
    in>>n;
    copien = n;
    for(int i=0;i<9;i++)
    {
        v[i]=0;
    }
    while(n)
    {
        v[cif]=n%10;
        n=n/10;
        cif++;
    }

    start = cif/2 - 1;
    for(int i2=start;i2>=0;i2--)
    {
        if(v[i2]!=v[cif-1-start+i2])
            ok=false;
        noul_n=noul_n*10+v[i2];
    }
    if(ok)
    {
        if(cif == 1)
            out << copien;
        else
            out<<noul_n;
    }
    else
    {
        out<<v[cif-1];
    }

    return 0;
}
