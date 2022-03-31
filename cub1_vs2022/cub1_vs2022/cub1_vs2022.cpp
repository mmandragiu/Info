#include <fstream>
using namespace std;

int f[10], v[51], nouv[50], n, culori, l, lmax, culoaremax, maxxval, elemelim[50], contor, nrpozelim;

int main()
{
    ifstream in("cub1.in");
    ofstream out("cub1.out");
    in >> n;
    lmax = 1;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        f[v[i]]++;
        if (v[i] > maxxval)
            maxxval = v[i];
    }
    for (int i = 1; i <= maxxval; i++)
    {
        if (f[i] != 0)
            culori++;
        if (f[i] > culoaremax)
            culoaremax = f[i];
    }
    out << culori << '\n';
    for (int i = 1; i <= maxxval; i++)
        if (f[i] == culoaremax)
            out << i << " ";
    out << '\n';
    for (int i = 1; i <= n; i++)
    {
        contor = 1;
        for (int j = 1; j < i; j++)
            nouv[contor] = v[j], contor++;
        for (int j = i + 1; j <= n; j++)
            nouv[contor] = v[j], contor++;
        contor--;
        for (int j = 1; j <= contor; j++)
        {
            if (nouv[j] == nouv[j + 1])
            {
                l = 0;
                while (nouv[j] == nouv[j + 1])
                    l++, j++;
                l++;
                if (l > lmax)
                {
                    lmax = l;
                    nrpozelim = 1;
                    elemelim[nrpozelim] = i;
                }
                else
                {
                    if (l == lmax)
                    {
                        nrpozelim++;
                        elemelim[nrpozelim] = i;
                    }
                }
            }
        }
    }
    out << lmax << '\n';
    if (lmax == 1)
    {
        for (int i = 1; i <= n; i++)
            out << v[i] << " ";
    }
    else
    {
        for (int i = 1; i <= nrpozelim; i++)
            out << elemelim[i] << " ";
    }
    in.close();
    out.close();
    return 0;
}