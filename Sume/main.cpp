#include <fstream>

using namespace std;
ifstream in("sume.in");
ofstream out("sume.out");

int main()
{int n,v,i,s;
 in>>n;
 s=0;
 for(i=0;i<=n-1;i++)
 {
     in>>n;
     s=s+v;
 }
 for(i=n-1;i<=0;i++)
 {
     out<<s<<endl;
     s=s-v;
 }
 return 0;
}
