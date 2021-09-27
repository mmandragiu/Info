#include <iostream>
using namespace std;
bool prim(int n)
{
    int d = 2;
    if (n < 2)
    {
        return false;
    }
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}
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
    int x[1000], n, contor = 0,v[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (prim(x[i]) == true)
        {
            v[contor] = x[i];
            contor++;
        }
    }
    SortareVector(v, contor);
    for (int i = 0; i < contor; i++)
        cout << v[i]<<" ";

}