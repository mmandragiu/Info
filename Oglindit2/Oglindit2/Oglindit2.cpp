#include <iostream>
using namespace std;
int oglindit(int n)
{
    int r = 0,ultimcif;
    while (n != 0)
    {
        ultimcif = n % 10;
        r = r * 10 + ultimcif;
        n = n / 10;
    }
    return r;
}

int main()
{
    int n, r;
    cin >> n;
    r = oglindit(n);
    cout << r;
    return 0;
}