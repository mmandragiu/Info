#include <fstream>
using namespace std;

short int m, n, a[21][21], coloanacurenta, liniecurenta, f[21][21], l, c, boabe, r;

int main()
{
    ifstream in("robinson.in");
    ofstream out("robinson.out");
    in >> m >> n >> l >> c;
    for (int i = 1; i <= m; i++)
        a[1][i] = n + i - 1;//construim linia
    for (int i = 1; i <= m; i++)
        a[i][1] = n + i - 1;//construim coloana
    for (int i = 2; i <= m; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
            if (a[i][j] > 999)
                a[i][j] = a[i][j] % 1000;
        }
    }
    out << a[m][m] << '\n';
    bool gata = false;
    coloanacurenta = c, liniecurenta = l;
    while (!gata)
    {
        if ((coloanacurenta <= 0 || liniecurenta <= 0 || coloanacurenta > m || liniecurenta > m) || f[liniecurenta][coloanacurenta] == 1)
        {
            gata = true;
            break;
        }
        boabe = a[liniecurenta][coloanacurenta];
        r = boabe % 4;
        f[liniecurenta][coloanacurenta] = 1;
        out << liniecurenta << " " << coloanacurenta << '\n';
        if (r == 0)
            liniecurenta--;
        if (r == 1)
            coloanacurenta++;
        if (r == 2)
            liniecurenta++;
        if (r == 3)
            coloanacurenta--;
    }
}