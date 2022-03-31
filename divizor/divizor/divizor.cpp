#include <fstream>
using namespace std;

int digits[7], n, new_n, indice;

int Divizori(int n)
{
    int d, div = 0;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
            div += 2;
    if (d * d == n)
        div++;
    return div;
}

int CifNr(int n)
{
    int cifre = 0;
    while (n)
        cifre++, n /= 10;
    return cifre;
}

int main()
{
    ifstream in("divizor.in");
    ofstream out("divizor.out");
    in >> n;
    indice = CifNr(n);
    while (n)
    {
        digits[indice] = n % 10;
        indice--;
        n /= 10;
    }
}