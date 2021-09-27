#include <iostream>

using namespace std;

int main()
{
    int a,b,r,copiea,copieb;
    cin>>a>>b;
    copiea=a;
    copieb=b;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<a<<" "<<copiea*copieb/a;
    return 0;
}
