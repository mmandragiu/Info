#include <iostream>
using namespace std;
int Phi(int n)
{
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        int copiei = i;
        int copien = n;
        int r;
        while (copiei)
        {
            r = copien % copiei;
            copien = copiei;
            copiei = r;
        }
        if (copien == 1)
            p++;
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    cout << Phi(n);
    return 0;
}