#include <iostream>
using namespace std;

int CMMDC(int a, int b)
{
    int r;  
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, v[200], perechi = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)    
        cin >> v[i];
    for (int i = 1; i <= n / 2; i++)
    {
        if (CMMDC(v[i], v[n - i + 1]) == 1)
            perechi = perechi + 1;
    }
    cout << perechi;
    return 0;
}