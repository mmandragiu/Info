#include <iostream>
using namespace std;

int main()
{
    int a, b, c, rez = -1;
    cin >> a >> b >> c;
    if (a * b + c > rez)
        rez = a * b + c;
    if (a * c + b > rez)
        rez = a * c + b;
    if (b * c + a > rez)
        rez = b * c + a;
    cout << rez;
    return 0;
}