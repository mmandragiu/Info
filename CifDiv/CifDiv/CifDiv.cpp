#include <iostream>
using namespace std;

int main()
{
    int n, m, gasite = 0,a,b,c;
    cin >> n >> m;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    if (m % a == 0 and a!=0)
        gasite++;
    if (m % b == 0 and b!=0)
        gasite++;
    if (m % c == 0 and c!=0)
        gasite++;
    cout << gasite;
    return 0;
}