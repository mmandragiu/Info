#include <fstream>
using namespace std;

ifstream in("tabel.in");
ofstream out("tabel.out");


int main()
{
    int a[51][51], n, m, p, l, c, sumcol[51] = { 0 }, s = 0, sumlin[51] = { 0 }, lipsalinie[51] = { 0 }, lipsacoloana[51] = { 0 };
    in >> n >> m >> p;
    for (int i = 1; i <= p; i++)
    {
        in >> l >> c;
        in >> a[l][c];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] < 0)
                lipsalinie[i]++, lipsacoloana[j]++;
        }
    }
    bool gata = false;
    while (gata == false)
    {
        int maxx = max(n, m);
        for (int i = 1; i <= maxx; i++)
            sumcol[i] = 0, sumlin[i] = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j < n; j++)
                if (a[j][i] >= 0)
                    sumcol[i] += a[j][i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < m; j++)
                if (a[i][j] >= 0)
                    sumlin[i] += a[i][j];
        }
        for (int i = 1; i <= n; i++)
        {
            if (lipsalinie[i] == 1)
            {
                for (int j = 1; j < m; j++)
                {
                    if (a[i][j] < 0)
                    {
                        a[i][j] = a[i][m] - sumlin[i];
                        lipsalinie[i] = 0;
                        lipsacoloana[j]--;
                    }
                }
            }
        }

        maxx = max(n, m);
        for (int i = 1; i <= maxx; i++)
            sumcol[i] = 0, sumlin[i] = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j < n; j++)
                if (a[j][i] >= 0)
                    sumcol[i] += a[j][i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < m; j++)
                if (a[i][j] >= 0)
                    sumlin[i] += a[i][j];
        }
        for (int j = 1; j <= m; j++)
        {
            if (lipsacoloana[j] == 1)
            {
                for (int i = 1; i < n; i++)
                {
                    if (a[i][j] < 0)
                    {
                        a[i][j] = a[n][j] - sumcol[j];
                        lipsacoloana[j] = 0;
                        lipsalinie[i]--;
                    }
                }
            }
        }
        maxx = max(n, m);
        for (int i = 1; i <= maxx; i++)
            sumcol[i] = 0, sumlin[i] = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j < n; j++)
                if (a[j][i] >= 0)
                    sumcol[i] += a[j][i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < m; j++)
                if (a[i][j] >= 0)
                    sumlin[i] += a[i][j];
        }
        for (int j = 1; j <= m; j++)
        {
            if (a[n][j] < 0 && lipsacoloana[j] == 1)
                a[n][j] = sumcol[j];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i][m] < 0 && lipsalinie[i] == 1)
                a[i][m] = sumlin[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] < 0)
                {
                    gata = false;
                    break;
                }
                else
                {
                    gata = true;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            out << a[i][j] << " ";
        out << endl;
    }
    return 0;
}