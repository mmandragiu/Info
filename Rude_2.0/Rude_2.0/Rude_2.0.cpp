#include <fstream>
#include <cmath>
using namespace std;
ifstream in("rude.in");
ofstream out("rude.out");
int CifNr(int n)
{
    int cif = 0;
    while (n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int n, cifn[10] = { 0 }, cifren = 0, cnp = 0, cnpuri[9] = { 0 }, copien, primacifn = 0, i1 = 0, i2 = 0, max = 0, dif = 0;
    in >> n;
    cifren = CifNr(n);
    i2 = cifren - 2;
    primacifn = n / (int)pow(10, CifNr(n) - 1);
    copien = n;
    if (n >= 10 && n <= 99)
    {
        out << 1 << '\n' << 1 << '\n' << (n % 10) * 10 + n / 10;
        return 0;
    }
    else
    {
        // Afisez numarul de rude
        out << cifren - 1 << '\n';
        // Extrag cifrele in vector
        int i = 0;
        while (n > 0)
        {
            cifn[cifren - i - 1] = n % 10;
            n /= 10;
            i++;
        }

        n = copien;
        
        for (int pozPrimaCf = 0; pozPrimaCf < cifren - 1; pozPrimaCf++)
        {
            int temp = cifn[pozPrimaCf + 1];
            cifn[pozPrimaCf + 1] = cifn[pozPrimaCf];
            cifn[pozPrimaCf] = temp;
            cnp = 0;
            for (int i = 0; i < cifren; i++)
                cnp = cnp * 10 + cifn[i];
            int x = cnp;
            cnpuri[pozPrimaCf] = cnp;
        }
        for (int i = 0; i < cifren - 1; i++)
        {
            if (cnpuri[i] > max)
                max = cnpuri[i];
            if (cnpuri[i] != cnpuri[i + 1])
                dif++;
        }
        out << dif << '\n' << max;
    }
    return 0;
}