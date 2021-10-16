#include <iostream>
using namespace std;

int PrimaCif(int n)
{
    while (n > 9)
    {
        n /= 10;
    }
    return n;
}

int main()
{
    int n, cifmax=-1, i1 = 0,x,maxnr=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (PrimaCif(x) > cifmax)
        {
            cifmax = PrimaCif(x);
            maxnr = x;
        }
        else
        {
            if (PrimaCif(x) == cifmax && x > maxnr)
                maxnr = x;
        }
    }
    cout << maxnr;
    return 0;
}
