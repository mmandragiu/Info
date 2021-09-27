#include <iostream>
using namespace std;
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    int n,ultimcif,primcif,x=0;
    cin >> n;
    ultimcif = n % 10;
    n = n / 10;
    while (n > 9)
        n = n / 10;
    primcif = n;
    x = primcif * 10 + ultimcif;
    if (prim(x) == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}