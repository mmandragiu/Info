#include <iostream>
#include <algorithm>
using namespace std;
void SortareVector(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
            {
                int copie = v[i];
                v[i] = v[j];
                v[j] = copie;
            }
        }
    }
}

int main()
{
    int n, pozmax = 0, pozmin = 0, v[1000] = { 0 }, max = -1000000, min = 1000000, minpoz = 0, maxpoz = 0, contor = 0, y[1000] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
        {
            max = v[i];
            pozmax = i;
        }
        if (v[i] < min)
        {
            min = v[i];
            pozmin = i;
        }
    }
    if (pozmin > pozmax)
    {
        minpoz = pozmax;
        maxpoz = pozmin;
    }
    if (pozmax > pozmin)
    {
        minpoz = pozmin;
        maxpoz = pozmax;
    }
    for (int i = minpoz; i <= maxpoz; i++)
    {
        y[contor] = v[i];
        contor++;
    }
    SortareVector(y,contor);
    for (int i = 0; i < minpoz; i++)
        cout << v[i]<<" ";
    for (int i = 0; i < contor; i++)
        cout << y[i]<<" ";
    for (int i = maxpoz+1; i < n; i++)
        cout << v[i]<<" ";
    return 0;
}