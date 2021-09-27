#include <fstream>

using namespace std;
ifstream in("date.in");
ofstream out("date.out");

int main()
{int a,b,i,n,gigel;
 in>>a>>b>>n;
 for(i=a;i<=b;i++)
 {
     if(i%10==n%10)
     {
         out<<i<<" ";
         gigel++;
          if(gigel%3==0)
         out<<'\n';
     }

 }
    return 0;
}
