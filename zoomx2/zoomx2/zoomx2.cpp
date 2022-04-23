#include <fstream>
using namespace std;

char a[51][51], new_a[101][101];
int n, linie, coloana;

int main()
{
    ifstream in("zoomx2.in");
    ofstream out("zoomx2.out");
    in >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            in >> a[i][j];
    for (int i = 1; i <= 2 * n; i += 2)
    {
        linie++;
        coloana = 0;
        for (int j = 1; j <= 2 * n; j += 2)
        {
            coloana++;
            for (int k = i; k <= i + 1; k++)
            {
                for (int l = j; l <= j + 1; l++)
                    new_a[k][l] = a[linie][coloana];
            }
        }
    }
    for (int l = 1; l <= 2 * n; l++)
    {
        for (int i = 1; i <= 2 * n; i++)
            out << new_a[l][i];
        out << endl;
    }
}