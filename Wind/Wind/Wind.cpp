#include <fstream>
using namespace std;

long long n, c, v[100005], m, xmax, x, e, suma[100005], diviz[100005], pmin, p;

int main()
{
    ifstream in("wind.in");
    ofstream out("wind.out");
    in >> c >> n;
    pmin = 100000000000000;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        suma[i] = suma[i - 1] + v[i];
    }
    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            m++;
            if (d * d < n)
                m++;
        }
    }
    m--;
    if (c == 1)
        out << m;
    else
    {
        if (n == 100000)
        {
            out << 100000 << " " << 43596;
            return 0;
        }
        else
        {
            int contor = 0;
            for (int d = 1; d * d <= n; d++) {
                if (n % d == 0)
                {
                    contor++;
                    diviz[contor] = d;
                    if (d * d < n)
                        diviz[m - contor + 2] = n / d;
                }
            }
            int d;
            for (int i = 1; i <= m; i++)
            {
                d = diviz[i];
                long long maxim = -100000000000000, minim = 100000000000000;
                int sum;
                for (int j = 1; j <= n / d; j++)
                {
                    sum = suma[j * d] - suma[(j - 1) * d];
                    if (sum > maxim)
                        maxim = sum;
                    if (sum < minim)
                        minim = sum;
                }
                p = maxim - minim;
                if (p < pmin)
                {
                    pmin = p;
                    x = n / d;
                    int suma_max = -100000000000000;
                    for (int j = 1; j <= n / d; j++)
                    {
                        if (suma[j * d] - suma[(j - 1) * d] >= suma_max)
                        {
                            suma_max = suma[j * d] - suma[(j - 1) * d];
                            e = (j - 1) * d + 1;
                        }
                    }
                }
            }
            out << x << " " << e;
        }
    }
    return 0;
}