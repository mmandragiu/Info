#include <iostream>
using namespace std;

void SortareVector(int v[], int n)
{
    for (int i = 0; i < n-1; i++)
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
    int v[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    SortareVector(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}