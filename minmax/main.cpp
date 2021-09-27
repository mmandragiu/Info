#include <fstream>

using namespace std;
ifstream in("minmax.in");
ofstream out("minmax.out");
int main()
{int n,i,v,minim,maxim;
 in>>n;
 minim=1000000;
 maxim=-1;
 for(i=1;i<=n;i++)
 {
     in>>v;
     if(v<minim)
     minim=v;
     if(v>maxim)
     maxim=v;
 }
 out<<minim<<" "<<maxim;
    return 0;
}
