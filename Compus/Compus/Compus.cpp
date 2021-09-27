#include <fstream>
using namespace std;
ifstream cin("compus.in");
ofstream cout("compus.out");

int main()
{
    int v[10001], primapar = 0, n, e, p,copie,x;
    cin >> n >> e >> p;
    x = n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == e && primapar == 0)
        {
            for (int i2 = i; i2 < n; i2++)
                v[i2] = v[i2 + 1];
            n--;
            primapar++;
            break;
        }
    }
    n++;
    for (int i = n; i >= p+1; i--)
    {
        if (i == p+1)
            v[i] = e;
        else
            v[i] = v[i - 1];
    }
    for (int i = 1; i <= n / 2; i++)
    {
        copie = v[x];
        v[x] = v[i];
        v[i] = copie;
        x--;
    }
    copie = v[1];
    for (int i = 1; i < n; i++)
        v[i] = v[i + 1];
    v[n] = copie;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}