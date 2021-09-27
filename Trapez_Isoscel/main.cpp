#include <iostream>
#include <cmath>

using namespace std;

int main()
{float d,B,b,l,x;
 cin>>B>>b>>l;
 x=(B-b)/2;
 d=sqrt(l*l-x*x+(b+x)*(b+x));
 cout<<d;
 return 0;
}
