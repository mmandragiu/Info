#include <iostream>
using namespace std;

int main()
{
    int n,v[1000],max=-1000000000,pozmax=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
            max = v[i];
    }
    for (int i = 0; i < n; i++)
        if (v[i] == max)
            pozmax = i;
    for (int i = 0; i < pozmax-1; i++)
    {
        for (int j = i + 1; j < pozmax; j++)
        {
            if (v[j] < v[i])
            {
                int copie = v[i];
                v[i] = v[j];
                v[j] = copie;
            }
        }
    }
    for (int i = pozmax+1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                int copie = v[i];
                v[i] = v[j];
                v[j] = copie;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";
}