#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double pi;
    double r;
    cin>>r;
    pi=3.14159265359;
    printf("%.6f",pi*r*r);
    printf(" ");
    printf("%.6f",2.0*pi*r);
    return 0;
}
