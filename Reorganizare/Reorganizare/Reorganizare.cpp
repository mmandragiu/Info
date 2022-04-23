#include <fstream>
#include <cmath>
using namespace std;

int n, ciftotal, cifre[31376], contor;

int CifNr(int n) {
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

int main()
{
    ifstream in("reorganizare.in");
    ofstream out("reorganizare.out");
    in >> n;
    ciftotal = (n * (n + 1)) / 2;
    int i = 1;
    while (ciftotal)
    {
        int cif = CifNr(i);
        int copiei = i;
        int copiecif = cif;
        if (ciftotal > cif)
        {
            while (i && ciftotal)
            {
                cifre[contor + cif - 1] = i % 10;
                cif--;
                i /= 10;
                ciftotal--;
            }
            contor += copiecif;
        }
        else
        {
            i = i / (int)pow(10, cif - ciftotal);
            while (ciftotal)
            {
                cifre[contor + ciftotal - 1] = i % 10;
                cif--;
                i /= 10;
                ciftotal--;
            }
        }
        i = copiei + 1;
    }
    out << cifre[n * (n - 1) / 2] << " " << cifre[n * (n + 1) / 2 - 1];
    return 0;
}