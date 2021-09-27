#include <fstream>
using namespace std;
ifstream cin("5div.in");
ofstream cout("5div.out");

int main()
{
    int n, nr = 0, nrdiv = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int d = 1; d * d <= i; d++)
        {
            if (i % d == 0)
            {
                nrdiv++;
                if (d * d < i)
                    nrdiv++;
            }
        }
        if (nrdiv >= 5)
            nr++;
        nrdiv = 0;
    }
    cout << nr;
}