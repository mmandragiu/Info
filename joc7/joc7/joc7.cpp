#include <fstream>
using namespace std;

int tabla[105][105], k, t, s, poz, c, n, lin, col;

int castigator(int **tabla)
{
    bool castiga_teo = true;
    bool castiga_stef = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((tabla[i][j] == 1 || tabla[i][j + 1] == 1) && tabla[i][j] != tabla[i][j + 1])
                castiga_teo = false;
            if ((tabla[i][j] == 0 || tabla[i][j + 1] == 0) && tabla[i][j] != tabla[i][j + 1])
                castiga_stef = false;
        }
        if (castiga_teo == false)
            break;
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if ((tabla[i][j] == 1 || tabla[i + 1][j] == 1) && tabla[i][j] != tabla[i][j + 1])
                castiga_teo = false;
        }
        if (castiga_teo == false)
            break;
    }
    for (int i = 1; i < n; i++)
    {
        if ((tabla[i][i] == 1 || tabla[i + 1][i + 1] == 1) && tabla[i][i] != tabla[i + 1][i + 1])
            castiga_teo = false;
    }
    for (int i = n; i > 1; i--)
    {
        if ((tabla[n - i + 1][i] == 1 || tabla[n - i][i - 1] == 1) && tabla[n - i + 1][i] != tabla[n - i][i - 1])
            castiga_teo = false;
    }
}

int main()
{
    ifstream in("joc7.in");
    ofstream out("joc7.out");
    in >> c >> n >> k;
    for (int i = 1; i <= 100; i++)
        for (int j = 1; j <= 100; j++)
            tabla[i][j] = -1;
    if (c == 1)
    {
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n * n; j++)
            {
                in >> poz;
                if (poz % n != 0)
                {
                    lin = poz / n + 1;
                    col = poz % n;
                }
                else
                {
                    lin = poz / n;
                    col = n;
                }
                if (i % 2 == 1)
                {
                    if (j % 2 == 1)
                        tabla[lin][col] = 1;
                    else
                        tabla[lin][col] = 0;
                }
                else
                {
                    if (j % 2 == 1)
                        tabla[lin][col] = 0;
                    else
                        tabla[lin][col] = 1;
                }
            }

        }
    }
    else
    {

    }
}