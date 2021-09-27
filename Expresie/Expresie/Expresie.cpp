#include <iostream>
using namespace std;

int main()
{
    unsigned long long n,prod=1,sum=0;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
       prod = prod *i;
       sum = sum + prod;
    }
        cout << "Rezultatul este " << sum;
    return 0;
}