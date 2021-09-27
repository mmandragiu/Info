#include <iostream>
using namespace std;

int main()
{
    int a, b,sum=0;
    cin >> a >> b;
    sum = b * (b - 1) / 2;
    if ((a - sum) % b == 0)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}