#include <iostream>

using namespace std;

int main()
{ int n,fibo=,i,s=0;
 cin>>n;
 for(i=1;i<=2;i++)
 {
     cout<<1<<" ";
 }
 for(i=3;i<=n;i++)
 {
     fibo++;
     s=fibo-1+fibo-2;
     cout<<s<<" ";
 }
    return 0;
}
