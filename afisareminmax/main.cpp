#include <iostream>

using namespace std;


int main()
{int v[1001],i,n,imax,imin,min,max;
 cin>>n;
 for(i=0;i<=n;i++)
 cin>>v[i];
 min=100000;
 max=-1;
 for(i=1;i<n;i++)
 {
     if(v[i]<min){min=v[i];imin=i}
     if(v[i]<max){max=v[i];imax=i}
 }
 for(i=imin;i<imax;i++)
 {
     cout<<v[i]<<" ";
 }
     return 0;
}
