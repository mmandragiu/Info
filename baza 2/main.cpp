#include <iostream>

using namespace std;

unsigned int cifreDeUnu(unsigned int n)
{
    unsigned int cif1 = 0;
    for(unsigned int i = 1<<31; i>0; i = i >> 1)
    {
        if(n&i) cif1++;
    }
    return cif1;
}

int main()
{
    unsigned int a, b;
    cin >>a>>b;
    if(cifreDeUnu(a)> cifreDeUnu(b))
        cout<<a;
    else
        cout<<b;
    return 0;
}
