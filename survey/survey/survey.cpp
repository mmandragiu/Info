#include <iostream>
#include <iomanip>
using namespace std;

float k, l, xa, ya, xb, yb, lin, col, a[2005][2005], dist, distmax, prevcoord;
float r;

int main()
{
    cin >> k >> l >> xa >> ya >> xb >> yb;
    xa += 1000, ya += 1000, xb += 1000, yb += 1000;
    for (int i = 1; i <= k; i++)
    {
        cin >> lin >> col;
        lin += 1000, col += 1000;
        if (i == 1)
        {
            distmax = max(distmax, lin - xa);
            prevcoord = lin;
        }
        else
        {
            if (i > 1 && i < k)
                distmax = max(distmax, lin - prevcoord), prevcoord = lin;
            else
                if (i == k)
                    distmax = max(distmax, xb - lin);
        }
    }
    r = distmax / 2;
    cout << fixed << setprecision(6) << r;
}