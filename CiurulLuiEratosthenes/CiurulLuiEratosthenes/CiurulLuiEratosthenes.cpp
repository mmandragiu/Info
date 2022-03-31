#include <iostream>
using namespace std;

int Eratostene[10000001] = { 0 };

int main()
{
    Eratostene[0] = 1;
    Eratostene[1] = 1;
    for (int i = 2; i * i <= 1000000; i++)
    {
        for (int j = 2; j <= 1000000 / i; j++)
            Eratostene[j * i] = 1;
    }
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (Eratostene[i] == 0)
            cout << i << " ";
    }
    return 0;
}