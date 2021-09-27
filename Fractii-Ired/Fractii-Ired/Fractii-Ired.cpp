#include <iostream>
using namespace std;

int CMMDC(int a, int b) {

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
    int n, ired = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (CMMDC(i, n) == 1)
            ired++;
    cout << ired;
    return 0;
}