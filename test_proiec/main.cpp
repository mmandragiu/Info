#include <iostream>

using namespace std;

int test(int a){
    a=a*5;
    return a;
}

int main()
{
    int x;
    x=test(x);
    cout<<x;
    return 0;
}
