#include <iostream>
using namespace std;

int main()
{
    int n, X[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i];
    for (int p = n - 1; p >= 0; p--)
        if (X[p] % 2 == 0) {
            for (int i = p; i < n - 1; i++)
                X[i] = X[i + 1];
            n--;
        }
}