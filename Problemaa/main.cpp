#include <iostream>

using namespace std;

int main()
{int n,uc;
 cin>>n;
 if(n%4==0)
 uc=6;
 if(n%4==1)
 uc=2;
 if(n%4==2)
 uc=4;
 if(n%4==3)
 uc=8;
 if(n==0)
 uc=1;
    return 0;
}
