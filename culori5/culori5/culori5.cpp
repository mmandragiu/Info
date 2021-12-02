#include <fstream>
using namespace std;

int v[1000001];

ifstream cin("culori.in");
ofstream cout("culori.out");

int main()
{
    int f[1001] = { 0 }, n, k, h, nrmax = -1, j = 0;
    cin >> n >> k; 
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= k; i++)
    {
        f[v[i]]++;
        if (nrmax < f[v[i]])
            nrmax = f[v[i]];
    }
    for (int i = k + 1; i <= n; i++)
    {
        f[v[i]]++;
        f[v[i - k]]--;
        if (nrmax < f[v[i]])
            nrmax = f[v[i]];
    }
    cout << nrmax;
    return 0;
}