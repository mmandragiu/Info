#include <fstream>

using namespace std;
ifstream mihai("date.in");
ofstream misu ("date.out");

int main()
{int a,b,i,n,gigel;
 mihai>>a>>b>>n;
 gigel=0;
 for(i=a;i<=b;i++)
 {
     if(i%n==0)
     {gigel++;
     misu<<i<<" ";}
     if(gigel==5)
     {misu<<'\n';
      gigel=0;}
 }
    return 0;
}
