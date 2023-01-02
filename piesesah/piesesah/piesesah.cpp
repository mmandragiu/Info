#include <fstream>
using namespace std;

int tabla_sah[1005][1005], n, m, t, lin, col;
char piese[1005][1005], piesa;

int main()
{
    ifstream fin("piesesah.in");
    ofstream fout("piesesah.out");
    fin >> n >> m >> t;
    for (int i = 1; i <= m; i++)
    {
        fin >> piesa >> lin >> col;
        piese[lin][col] = piesa;
    }
}