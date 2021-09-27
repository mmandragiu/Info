#include <iostream>
using namespace std;
int PIE(int a, int b)
{
    int r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void SortareVector(int v[], int n)
{
    for (int i = 0; i < n-1; i++)
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
    int n, v[1000] = { 0 }, ultimulelement = 0, vnou[1000] = { 0 }, contor = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ultimulelement = v[n-1];
    for (int i = 0; i < n-1; i++)
    {
        if (PIE(v[i], ultimulelement) == 1)
        {
            vnou[contor] = v[i];
            contor++;
        }
    }
    SortareVector(vnou, contor);
    for (int i = 0; i < contor; i++)
        cout << vnou[i]<<" ";
}