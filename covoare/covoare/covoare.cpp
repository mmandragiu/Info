#include <fstream>
using namespace std;

const int Nmax = 105;
int matrix[Nmax][Nmax], a, b, c, n, m, p;

int main()
{
    ifstream fin("covoare.in");
    ofstream fout("covoare.out");
    bool valabil;
    fin >> n >> m >> p;
    for (int i = 1; i <= p; i++)
    {
        fin >> a >> b >> c;
        valabil = true;
        for (int i1 = 1; i1 <= n && valabil; i1++)
        {
            for (int j1 = 1; j1 <= m && valabil; j1++)
            {
                if (matrix[i1][j1] == 0)
                {
                    for (int latime = i1; latime <= i1 + b - 1; latime++)
                    {
                        for (int lungime = j1; lungime <= j1 + a - 1; lungime++)
                            matrix[latime][lungime] = c;
                    }
                    valabil = false;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            fout << matrix[i][j] << " ";
        fout << endl;
    }
    return 0;
}