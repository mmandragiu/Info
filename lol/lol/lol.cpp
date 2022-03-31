#include <fstream>
#include <cmath>
using namespace std;

int Eratostene[301], n, x, y, prime, divimp, numar;

int main()
{
    Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i * i < 300; i++)
    {
        if (!Eratostene[i])
            for (int j = 2; j <= 300 / i; j++)
                Eratostene[j * i] = 1;
    }
    ifstream in("lol.in");
    ofstream out("lol.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x >> y;
        numar = (x + y) / 2;
        if ((int)sqrt(numar) == sqrt(numar) && numar != 0)
            divimp++;
        if (Eratostene[numar] == 0)
            prime++;
        out << numar << '\n';
    }
    out << divimp << " " << prime;
}