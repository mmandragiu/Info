#include <iostream>
using namespace std;

int main()
{
    int n, v[101], sumpare = 0, sumaNrIndiciPari = 0, NrDivCu10 = 0, NrDivCu3 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            sumpare += v[i];
        if (i % 2 == 0)
            sumaNrIndiciPari += v[i];
        if (v[i] % 10 == 0)
            NrDivCu10++;
        if (v[i] % 3 == 0 and i % 2 == 1)
            NrDivCu3+=v[i];
    }
    for (int i = n; i >= 1; i--)
        cout << v[i] << " ";
    cout << '\n' << sumpare << '\n' << sumaNrIndiciPari << '\n' << NrDivCu10 << '\n' << NrDivCu3;
}