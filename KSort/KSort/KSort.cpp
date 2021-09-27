#include <iostream>
using namespace std;
void SortareVectorCrescator(int v[], int k)
{
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
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
void SortareVectorDescrescator(int v[], int n, int k)
{
    for (int i = k; i < n - 1; i++)
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
}

int main()
{
    int n, v[1000] = { 0 }, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    SortareVectorCrescator(v, k);
    SortareVectorDescrescator(v, n, k);
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";
}