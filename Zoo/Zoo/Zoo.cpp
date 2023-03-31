#include <iostream>
#include <unordered_map>
using namespace std;

int t, a[101], b[101], c[101], d[101], n, m, nuci_culese, nuci_sparte, cnt;

int main()
{
    cin >> t >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> c[i] >> d[i];
    for (int s = 1; s <= t; s++)
    {
        nuci_culese = 0, nuci_sparte = 0;
        for (int i = 1; i <= n; i++)
            nuci_culese += (s - a[i]) / b[i];
        for (int i = 1; i <= m; i++)
            nuci_sparte += (t - s - c[i]) / d[i];
        if (nuci_culese == nuci_sparte)
        {
            cnt = s;
            break;
        }
    }
    cout << cnt;
}