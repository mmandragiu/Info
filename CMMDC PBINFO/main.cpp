#include <iostream>

using namespace std;

int main()
{int a,b,r;
 cin>>a>>b;
 if(a==0 && b==0)
 cout<<-1;
 while (b!=0)
 {
     r=a%b;
     a=b;
     b=r;
 }
 cout<<a;

    return 0;
}
