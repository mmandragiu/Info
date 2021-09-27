#include <fstream>

using namespace std;

ifstream in ("plaja2.in");
ofstream out("plaja2.out");

int main()
{int n,i,a,b,r;
 in>>n>>a;
 for(i=2;i<=n;i++)
 {
     in>>b;
     while(b)
     {
         r=a%b;
         a=b;
         b=r;
     }
 }
 out<<a;
    return 0;
}
