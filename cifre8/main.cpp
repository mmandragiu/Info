#include <fstream>
#include <cmath>

using namespace std;
ifstream in("cifre8.in");
ofstream out("cifre8.out");

int main()
{
    unsigned long long n,i,x,putere2=0,putere5=0,cifre0=0,ultimcif=1;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>x;
        if(x<0)
        {
            x=-x;
        }
        while(x%2==0)
        {
            putere2++;
            x=x/2;
        }
        while(x%5==0)
        {
            putere5++;
            x=x/5;
        }
        ultimcif=(ultimcif*(x%10))%10;
    }
    if(putere2<putere5)
    {
        cifre0=putere2;
        ultimcif=(ultimcif*5)%10;
    }
    else
    {
        cifre0=putere5;
        int ultimcifputere = 2;
        int rest4 = (putere2-putere5)%4;
        if(putere2 == putere5) ultimcifputere = 1;
        else if(rest4 == 0) ultimcifputere = 6;
        else if (rest4 == 1) ultimcifputere = 2;
        else if (rest4 == 2) ultimcifputere = 4;
        else if (rest4 == 3) ultimcifputere = 8;
        ultimcif=(ultimcif*ultimcifputere)%10;
    }
    out<<cifre0<<" "<<ultimcif;
    return 0;
}
