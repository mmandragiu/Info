#include <fstream>
using namespace std;
ifstream cin("cavaleri.in");
ofstream cout("cavaleri.out");
bool fericit(int n)
{
    int s = 0;
    int copien = n;
    if (n <= 9 && (n == 1 || n == 7))
        return true;
    else
    {
        while (copien > 9)
        {
            while (n)
            {
                s += (n % 10) * (n % 10);
                n /= 10;
            }
            n = s;
            copien = n;
            s = 0;
        }
        if (copien == 1)
            return true;
        else
            return false;
    }
}
int main()
{
    int n, x, p, min = 1000000000, zile = 1, mincavaler = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        while (p < x)
        {
            if (fericit(p) == true)
            {
                p += p;
                zile++;
            }
            else
            {
                p += 1;
                zile++;
            }
        }
        if (zile < min)
        {
            min = zile;
            mincavaler = i;
        }
        zile = 1;
    }
    cout << mincavaler << " " << min;
    return 0;
}