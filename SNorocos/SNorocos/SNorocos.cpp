#include <iostream>
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    a = n * n - n * (n - 1) / 2;
    if (a%n==0)
    {
        for (int i = 0; i < n; i++)
            cout << a / n + i << " ";
    }
    else
        cout << "NU ESTE NOROCOS";
    return 0;
}