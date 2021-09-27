#include <fstream>

using namespace std;
ifstream in("felinare1.in");
ofstream out("felinare1.out");
int cmmdc(int a,int b)
{
    int r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int n,p;
    in>>n>>p;
    if((p/cmmdc(n,p))%2==0)
        out<<"FARA SOLUTIE";
    else
        out<<n/cmmdc(n,p);
    return 0;
}
