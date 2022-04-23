#include <fstream>
using namespace std;

int cifrenumar(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

int main()
{
    ifstream in("cifre9.in");
    ofstream out("cifre9.out");
    int n, k, apar = 0, v[10], indice,copie;
    in >> n >> k;
    copie = n;
    indice = cifrenumar(n);
    while (n)
    {
        if (n % 10 == k)
            apar++;
        v[indice] = n % 10;
        indice--;
        n /= 10;
    }
    out << apar << endl;
    if (k != 0)
    {
        for (int i = 1; i <= apar; i++)
            out << k;
    }
    indice = cifrenumar(copie);
    for (int i = 1; i <= indice; i++)
    {
        if (v[i] != k)
            out << v[i];
    }
    return 0;
}