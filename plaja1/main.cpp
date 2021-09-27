#include <fstream>

using namespace std;
ifstream in("plaja1.in");
ofstream out("plaja1.out");

int main()
{
    int n,a,b,p,cmmmc,i,r;
    in>>n>>a;
    for(i=2; i<=n; i++)
    {
        in>>b;
        p=a*b;
        while (b)
        {
            r = a%b;
            a = b;
            b = r;
        }
        cmmmc=p/a;
        a=cmmmc;
    }
    out<<cmmmc;
    return 0;
}
