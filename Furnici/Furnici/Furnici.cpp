#include <fstream>
using namespace std;
ifstream cin("furnici.in");
ofstream cout("furnici.out");
int main()
{
    int n, x, nr = 0, lungime = 1, v[100001] = { 0 },nrdiv=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int d = 1; d * d <= x; d++)
        {
            if (x % d == 0)
            {
                nrdiv++;
                if (d * d < x)
                    nrdiv++;
            }
        }
        v[i] = nrdiv;
        nrdiv = 0;
    }
    for (int i = 2; i <= n; i++)
    {
        if (v[i] < v[i - 1])
            lungime++;
        else
        {
            if (lungime >= 2)
                nr++;
            lungime = 1;
        }
    }
    if (lungime >= 2)
        nr++;
    cout << nr;

}