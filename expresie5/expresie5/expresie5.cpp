#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    unsigned long long int prod=1, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            prod = prod * i;
        sum += prod;
        prod = 1;
    }
    cout <<"Rezultatul este "<< sum;
}