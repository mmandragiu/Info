#include <fstream>

using namespace std;
ifstream in("pozitii.in");
ofstream out("pozitii.out");
int main()
{int i,n,v,numeregasite=0;
 in>>n;
 for(i=0;i<=n-1;i++)
 {
     in>>v;
     if(v==i)
     numeregasite++;
 }
 out<<numeregasite;
    return 0;
}
