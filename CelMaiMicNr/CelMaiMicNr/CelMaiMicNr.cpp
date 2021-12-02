#include <iostream>
using namespace std;

int cmmnr(int n)
{
    int v[10] = { 0 }, copien = 0, cif = 0, nou_n = 0;
    copien = n;
    while (copien)
    {
        copien /= 10;
    }
    while (n)
    {
        v[n % 10]++;
        n /= 10;
    }
    if (v[0] != 0)
    {
        for (int i = 1; i < 10; i++)
        {
            if (v[i] != 0)
            {
                nou_n = nou_n * 10 + i;
                v[i]--;
                break;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (v[i] != 0)
            {
                for (int j = 0; j < v[i]; j++)
                    nou_n = nou_n * 10 + i;
            }
        }
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            if (v[i] != 0)
            {
                for (int j = 0; j < v[i]; j++)
                    nou_n = nou_n * 10 + i;
            }
        }
    }
    return nou_n;
}

int main()
{
    int n;
    cin >> n;
    cout << cmmnr(n);
    return 0;
}