#include <fstream>
using namespace std;
ifstream in("hobbit.in");
ofstream out("hobbit.out");

int main()
{
    int a, b, rest, cif_pare_a = 0, cif_impare_b = 0,ca,cb,copie_cif_pare_,copie_cif_impare;
    in >> a >> b;
    ca = a;
    cb = b;
    while (a != 0)
    {
        int ultimcif_a = a % 10;
        if (ultimcif_a % 2 == 0)
            cif_pare_a++;
        a = a / 10;
    }
    while (b != 0)
    {
        int ultimcif_b = b % 10;
        if (ultimcif_b % 2 == 1)
            cif_impare_b++;
        b = b / 10;
    }
    copie_cif_pare_ = cif_pare_a;
    copie_cif_impare = cif_impare_b;
    while (cif_impare_b != 0)
    {
        rest = cif_pare_a % cif_impare_b;
        cif_pare_a = cif_impare_b;
        cif_impare_b = rest;
    }
    out << copie_cif_pare_ * copie_cif_impare / cif_pare_a;
}