#include <iostream>
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
    int n, inaltimi[1000], copieInaltimi[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> inaltimi[i];
        copieInaltimi[i] = inaltimi[i];
    }
    SortareVector(inaltimi, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (inaltimi[i] == copieInaltimi[j])
            {
                cout << j + 1 << " ";
            }
        }
    }
}