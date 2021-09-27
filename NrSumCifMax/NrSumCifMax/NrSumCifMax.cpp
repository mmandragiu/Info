#include <iostream>
using namespace std;
int SumCif(int n)
{
    int sumcif = 0;
    while (n != 0)
    {
        sumcif += n % 10;
        n = n / 10;
    }
    return sumcif;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (SumCif(a) > SumCif(b) and SumCif(a) > SumCif(c))
        cout << a;
    if (SumCif(b) > SumCif(c) and SumCif(b) > SumCif(a))
        cout << b;
    if (SumCif(c) > SumCif(b) and SumCif(c) > SumCif(a))
        cout << c;
    if (SumCif(a) == SumCif(b) and SumCif(a) > SumCif(c))
        cout << a<<" "<<b;
    if (SumCif(a) > SumCif(b) and SumCif(a) == SumCif(c))
        cout << a<<" "<<c;
    if (SumCif(b) > SumCif(a) and SumCif(b) == SumCif(c))
        cout << b<<" "<<c;
    if (SumCif(a) == SumCif(b) and SumCif(a) == SumCif(c))
        cout << a<<" "<<b<<" "<<c;
    return 0;
}