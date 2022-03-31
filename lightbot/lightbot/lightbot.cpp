#include <fstream>
using namespace std;

int f[200001], nivelesarite[200001], a, b, n, maxx, nrmax, l, c, contor;

int main()
{
    ifstream in("lightbot.in");
    ofstream out("lightbot.out");
    in >> c >> n >> a;
    f[a]++;
    maxx = 1;
    nrmax = a;
    contor = 0;
    while (in >> b)
    {
        f[b]++;
        if (f[b] > maxx)
        {
            maxx = f[b];
            nrmax = b;
        }
        else
        {
            if (f[b] == maxx && b > nrmax)
                nrmax = b;
        }
        if (l == 0 && b - a == 2)
            l = b - 1;
        else
        {
            if (b - a != 1)
            {
                nivelesarite[++contor] = l;
                l = 0;
            }
        }
        a = b;
    }
    nivelesarite[++contor] = l;
    if (c == 1)
        out << contor;
    if (c == 2)
        out << nrmax;
    if (c == 3)
    {
        for (int i = 1; i < contor; i++)
            out << nivelesarite[i] << " ";
        out << nivelesarite[contor];
    }
    return 0;
}