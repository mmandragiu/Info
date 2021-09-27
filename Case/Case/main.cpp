#include <fstream>
using namespace std;
ifstream in("case.in");
ofstream out("case.out");

int main()
{
    int n, nrcasa, copii = 0, femei = 0, barbati = 0, rudenie1 = 0, rudenie2 = 0, rudenie3 = 0, cifcasa = 0, ultimcif;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> nrcasa;
        while (nrcasa != 0)
        {
            ultimcif = nrcasa % 10;
            if (cifcasa == 0)
                copii = copii + ultimcif;
            if (cifcasa == 1)
                femei = femei + ultimcif;
            if (cifcasa == 2)
                barbati = barbati + ultimcif;
            if (cifcasa == 3)
            {
                if (nrcasa == 1)
                    rudenie1++;
                if (nrcasa == 2)
                    rudenie2++;
                if (nrcasa == 3)
                    rudenie3++;
            }
            cifcasa++;
            nrcasa = nrcasa / 10;
        }
        cifcasa = 0;
    }
    out << rudenie1 << '\n' << rudenie2 << '\n' << rudenie3 << '\n' << barbati << '\n' << femei << '\n' << copii;
    return 0;
}