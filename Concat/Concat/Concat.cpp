#include <iostream>
#include <cmath>
using namespace std;
int concat(int a, int b)
{
    int copieb,cifb=0;
    copieb = b;
    while (b)
    {
        cifb++;
        b /= 10;
    }
    a = a * (int)pow(10, cifb) + copieb;
    return a;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << concat(x, y);
    return 0;
}