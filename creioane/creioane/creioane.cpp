#include <fstream>
using namespace std;

ifstream in("creioane.in");
ofstream out("creioane.out");

int main()
{
    int n, a[9001][3], max = 0, f[9001] = { 0 }, varfuri[9001], cnt = 0, h;
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2; j++) {
            in >> a[i][j];
            f[a[i][j]]++;
        }
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == 0)
            varfuri[++cnt] = i;
    for (int i = 1; i <= cnt; i++)
    {
        h = 0;
        int creioncurent = a[varfuri[i]][1];
        while (creioncurent!=0)
        {
            h++;
            creioncurent = a[creioncurent][1];
        }
        h++;
        if (h > max)
            max = h;
    }
    out << max;
    return 0;
}