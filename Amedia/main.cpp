#include <fstream>
using namespace std;
ifstream in ("amedia.in");
ofstream out ("amedia.out");
int main()
{int n;
 in>>n;
 if(n%9==0)
   out<<n/9;
   else
   out<<n/9+1;
   return 0;
}
