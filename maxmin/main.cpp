#include <iostream>

using namespace std;

int main()
{long long i,v,min=1000000000,max=-1,mm;
 for(i=1;i<=3;i++)
 {
     cin>>v;
     if(v>max)
     max=v;
     if(v<min)
     min=v;

 }
 mm=max-min;
 cout<<mm;
 return 0;

    return 0;
}
