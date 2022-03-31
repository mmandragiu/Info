#include <iostream>
using namespace std;

int main()
{
    int x, v[200000] = { 0 }, max = -1;
    while (cin >> x)
    {
        v[x]++;
        if (x > max)
            max = x;
    }
    for (int i = 0; i <= max; i++)
        if (v[i] == 1)
            cout << i << " ";
    return 0;
}