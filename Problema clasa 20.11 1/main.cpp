#include <fstream>

using namespace std;
ifstream mihai("numere.in");
ofstream misu ("numere.out");

int main()
{int a,b,i,gigel;
 mihai>>a>>b;
 gigel=0;
 for(i=a;i<=b;i++)
 {
     gigel++;
     misu<<i<<" ";
     if(gigel==12)
     misu<<'\n';
 }

    return 0;
}
