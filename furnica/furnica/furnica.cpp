#include <fstream>
using namespace std;

ifstream in("furnica.in");
ofstream out("furnica.out");

int main()
{
    int frimituri[201][201], frimituri_mancate = 0, frecv[201][201] = { 0 }, n, k, x, l, c, maxx = 0, patrate_max = 0;
    in >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            frimituri[i][j] = (i + j) % 6;
        }
    }
    frimituri_mancate += frimituri[1][1];
    frimituri[1][1] = 0;
    frecv[1][1]++;
    patrate_max = 1;
    l = 1, c = 1;
    for (int i = 1; i <= k; i++)
    {
        in >> x;
        if (x == 1)
        {
            l--;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 2)
        {
            l--;
            c++;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 3)
        {
            c++;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 4)
        {
            l++;
            c++;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 5)
        {
            l++;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 6)
        {
            l++;
            c--;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 7)
        {
            c--;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
        if (x == 8)
        {
            l--;
            c--;
            frimituri_mancate += frimituri[l][c];
            frimituri[l][c] = 0;
            frecv[l][c]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (frecv[i][j] > maxx)
            {
                maxx = frecv[i][j];
                patrate_max = 1;
            }
            else
            {
                if (frecv[i][j] == maxx)
                    patrate_max++;
            }
        }
    }
    out << frimituri_mancate << " " << patrate_max;
    return 0;
}