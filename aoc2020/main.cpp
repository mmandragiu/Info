#include <fstream>
#include <iostream>

using namespace std;
ifstream in("aoc2020.in");
ofstream out("aoc2020.out");

int main()
{
    long long n,a,b,r,produs,cmmmc,i;
    in>>n;
    in>>a;
    for(i=2;i<=n;i++)
    {
        in>>b;
        produs=a*b;
        while(b)
        {
            r=a%b;
            a=b;
            b=r;
        }
        cmmmc=produs/a;
        a=cmmmc;
    }
    out<<cmmmc;
    return 0;
}
