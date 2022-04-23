#include <fstream>
using namespace std;

int f[10], n, pozcurent, cifparcurse, v[10], cifren;

int Cif(int n)
{
    int cifre = 0;
    while (n)
        cifre++, n /= 10;
    return cifre;
}

int main()
{
    ifstream in("numar1.in");
    ofstream out("numar1.out");
    in >> n;
    cifren = Cif(n);
    pozcurent = cifren;
    int i = Cif(n);
    while (n) {
        v[i] = n % 10;
        i--;
        n /= 10;
    }
    cifparcurse = 1;
    while (f[pozcurent] != 1 && cifparcurse < cifren)
    {
        if (v[pozcurent] % 2 == 0)
        {
            f[pozcurent] = 1;
            pozcurent = (v[pozcurent] + pozcurent) % cifren;
            if (pozcurent == 0)
                pozcurent = cifren;
        }
        else
        {
            f[pozcurent] = 1;
            pozcurent = (pozcurent - v[pozcurent]) % cifren;
            if (pozcurent == 0)
                pozcurent = cifren;
            if (pozcurent < 0)
                pozcurent = cifren + pozcurent;
        }
        cifparcurse++;
    }
    out << v[pozcurent];
    return 0;
}