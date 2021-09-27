#include <fstream>

using namespace std;
ifstream in("padure.in");
ofstream out("padure.out");
int CMMDC(int a,int b)
{
  int r;
  while(b)
  {
      r=a%b;
      a=b;
      b=r;
  }
  return a;
}

int main()
{
    int n,a,b,copiea,lungime=1,maxim=0;
    in>>n>>a;
    copiea=a;
    for(int i=2;i<=n;i++)
    {
        in>>b;
        if(CMMDC(a,b)>1)
        {
            lungime++;
        }
        else
        {
          if(lungime>maxim)
                maxim=lungime;
            lungime=1;
        }
        a=b;
    }
    maxim=max(maxim,lungime);
    out<<maxim;
    return 0;
}
