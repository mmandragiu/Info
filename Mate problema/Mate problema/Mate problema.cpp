#include <iostream>
using namespace std;
bool Prim(int n)
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
    int nrprime = 0, sumaprime = 0,sum=0;
    for (int i = 2323; i <= 2328; i++)
    {
        if (Prim(i) == true)
        {
            nrprime++;
            sumaprime += i;
        }
        sum += i;
    }
    cout << nrprime << '\n' << sum<<'\n'<<sumaprime;
    return 0;
}