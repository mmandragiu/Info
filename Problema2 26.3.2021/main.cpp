#include <iostream>

using namespace std;
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
    int a,b,c,d;
    return 0;
}
