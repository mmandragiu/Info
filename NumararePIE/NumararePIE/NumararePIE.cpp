#include <iostream>
using namespace std;
bool PIE(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    if (a == 1)
        return true;
    else
        return false;
}

int main()
{
    int n, v[200], C = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (PIE(v[i], v[j]) == true)
                C++;
        }
    }
    cout << C;
}