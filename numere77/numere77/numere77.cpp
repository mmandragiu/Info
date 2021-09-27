#include <iostream>
using namespace std;
bool echilibrat(int n)
{
    int sumcifp = 0, sumcifi = 0;
    while (n)
    {
        if ((n % 10) % 2 == 0)
            sumcifp += n % 10;
        else
            sumcifi += n % 10;
        n /= 10;
    }
    if (sumcifp == sumcifi)
        return true;
    else
        return false;
}

int main()
{
    int a, b, sum=0;
    cin >> a >> b;
    if (a == b)
    {
        if (echilibrat(a) == true)
            cout << a;
        else
            cout << 0;
        return 0;
    }
    for (int i = a; i <= b; i++)
    {
        if (echilibrat(i) == true)
            sum+=i;
    }
    cout << sum;
    return 0;
}