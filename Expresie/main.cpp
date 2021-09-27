#include <iostream>
#include <cmath>

using namespace std;

int main()
{unsigned short int a;
 int rezultat,a2,a4;
 cin>>a;
 a2=a*a;
 a4=a2*a2;
 rezultat=(int)((3*(a2+a4))/(a2+a4+sqrt(a2+a4))+sqrt(a2+a4));
 cout<<rezultat;
    return 0;
}
