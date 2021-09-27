#include <iostream>
using namespace std;
int SumCif(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}

int main()
{
    int n, v[100000], x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (SumCif(v[i]) == SumCif(v[j]))
                x++;
        }
    }
    cout << x;
    return 0;
}