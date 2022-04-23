#include <fstream>
using namespace std;

int CifreN(int n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;
    return cif;
}

int main()
{
    ifstream in("cifru.in");
    ofstream out("cifru.out");
    int n, cif[10], i, copie, cifren, prefix[10] = { 0 }, x = 0, y = 0;
    in >> n;
    cifren = CifreN(n);
    i = CifreN(n);
    copie = n;
    while (copie)
    {
        cif[i] = copie % 10;
        i--;
        copie /= 10;
    }
    for (i = 1; i <= cifren; i++)
    {
        for (int j = 1; j <= i; j++)
            prefix[i] = prefix[i] * 10 + cif[j];
    }
    for (i = 1; i < cifren; i++)
    {
        if (prefix[i] % cifren == 0)
            x++;
        else
        {
            for (int j = i + 1; j <= cifren; j++)
                if (prefix[i] % cifren == prefix[j] % cifren)
                    y++;
        }
    }
    if (prefix[cifren] % cifren == 0)
        x++;
    out << x + y;
    return 0;
}