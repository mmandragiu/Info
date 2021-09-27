#include <iostream>

using namespace std;

int main()
{int x,y,uc1,uc2;
 cin>>x>>y;
 if(x==0)
 uc1=1;
 else
 if(x%2==0)
 uc1=1;
 else
 uc1=9;
 if(y==0)
 uc2=1;
 else
 uc2=6;
 cout<<(uc1+uc2)%10;
    return 0;
}
