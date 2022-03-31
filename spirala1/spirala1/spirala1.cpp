#include <fstream>
#include <cmath>

using namespace std;

const int N = 100;
const int ND = 4;///numarul de deplasari
const int dl[] = { 1, 0, -1, 0 };
const int dc[] = { 0, 1, 0, -1 };

int a[N + 1][N + 1];
bool marcat[N + 2][N + 2];

int main()
{
    ifstream in("spirala1.in");
    ofstream out("spirala1.out");
    int n2, n;
    ///citirea datelor
    in >> n2;
    n = (int)sqrt(n2);

    ///bordarea
    for (int i = 1; i <= n; i++)///col. 0 si col. n+1
    {
        marcat[i][0] = marcat[i][n + 1] = true;
    }
    for (int j = 1; j <= n; j++)///lin. 0 si lin. n+1
    {
        marcat[0][j] = marcat[n + 1][j] = true;
    }
    int l = 1, c = 1, deplasare = 0;///dc = deplasarea curenta
    for (int i = 0; i < n2; i++)
    {
        int aux;
        in >> aux;
        a[l][c] = aux;///punem aux la locul lui in matricea a
        marcat[l][c] = true;///marchez poz. curenta din matrice ca inaccesibila
        if (marcat[l + dl[deplasare]][c + dc[deplasare]])
        {
            deplasare++;
            if (deplasare == ND)
            {
                deplasare = 0;
            }
        }
        l += dl[deplasare];
        c += dc[deplasare];
    }
    in.close();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            out << a[i][j] << " ";
        }
        out << "\n";
    }
    out.close();
    return 0;
}
