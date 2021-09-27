#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    unsigned long long int prod=1, sum=0;
    cin >> n;
    if (n == 0)
    {
        cout << "Rezultatul este ";
    }
    for (int i = 1; i <= n; i++)
    {
        prod = (int)pow(i, i);
        sum = sum + prod;
    }
    cout <<"Rezultatul este "<< sum;
}