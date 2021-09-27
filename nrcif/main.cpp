#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x>=0 && x<10)
        cout<<1;
    if(x>=10 && x<100)
        cout<<2;
    if(x>=100 && x<1000)
        cout<<3;

    return 0;
}
