#include <fstream>
using namespace std;

long long n, cif[10], cif1[10], contor;
bool anagramabil, afost;

int main()
{
    ifstream in("anagramabil.in");
    ofstream out("anagramabil.out");
    in >> n;
    contor = 1;
    int copien = n;
    while (copien)
        cif[copien % 10]++, copien /= 10;
    for (int i = 2; i <= 9; i++)
    {
        anagramabil = true;
        int aux = i * n;
        for (int j = 0; j <= 9; j++)cif1[j] = 0;
        do
        {
            cif1[aux % 10]++;
            aux /= 10;
        } while (aux > 0);
        for (int j = 0; j <= 9; j++)
            if (cif[j] == cif1[j])
                anagramabil = true;
            else
            {
                anagramabil = false;
                break;
            }
        if (anagramabil == true)
        {
            if (contor == 1) {
                out << "DA" << '\n' << i;
            }
            else {
                out << i;
            }
            afost = true;
            contor++;
        }
    }
    if (afost == false)
        out << "NU";
    return 0;
}