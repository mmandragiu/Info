#include <fstream>
using namespace std;

int main()
{
    ifstream in("memory003.in");
    ofstream out("memory003.out");
    unsigned long long exp[98][301] = { 0 }, m, n, p, col = 0, d, putere, x, exp_nr_p[98] = { 0 }, nr = 0;
    in >> m >> n >> p;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            in >> x;
            d = 2;
            while (x > 1)
            {
                putere = 0;
                while (x % d == 0)
                    ++putere, x /= d;
                if (putere)
                    exp[d][j] += putere;
                ++d;
                if (x > 1 && d * d > x)
                    d = x;
            }
        }
    }
    d = 2;
    while (p > 1 && d<=100)
    {
        putere = 0;
        while (p % d == 0)
            ++putere, p /= d;
        if (putere)
            exp_nr_p[d] += putere;
        ++d;
        if (p > 1 && d * d > p)
            d = p;
    }
    if (p > 1)
        out << 0;
    else
    {
        bool found = true;
        for (int j = 1; j <= n; j++)
        {
            found = true;
            for (int i = 2; i <= 97; i++)
            {
                if (exp[i][j] < exp_nr_p[i])
                {
                    found = false;
                    break;
                }
            }
            if (found)
                nr++;
        }
        out << nr;
    }
    return 0;
}