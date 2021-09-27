#include <iostream>

using namespace std;

int main()
{int a,b,c,maxi,mini,dif;
 cin>>a>>b>>c;
 maxi=a;
 mini=a;
 if(b>maxi)
  maxi=b;
 if(c>maxi)
  maxi=c;
 if(b<mini)
  mini=b;
 if(c<mini)
  mini=c;
 dif=maxi-mini;
 cout<<dif;
 return 0;
}
