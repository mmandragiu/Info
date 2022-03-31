#include <fstream>
using namespace std;
ifstream in("concurs3.in");
ofstream out("concurs3.out");

int main()
{
    long int C, N, EchipaConcurent, PunctajConcurent, ultimcif, sume[100000] = { 0 }, suma = 0, sumamax = -1, concurenti = 0;
    int PunctajEchipa1 = 0, PunctajEchipa2 = 0, PunctajEchipa3 = 0;
    in >> C >> N;
    if (C == 1)
    {
        for (int i = 1; i <= N; i++)
        {
            in >> EchipaConcurent >> PunctajConcurent;
            while (PunctajConcurent != 0)//aflam suma puncatjelor fiecarui concurent de la fiecare proba
            {
                ultimcif = PunctajConcurent % 10;
                if (ultimcif == 0 && (PunctajConcurent / 10) % 10 == 1)
                {
                    suma = suma + 10;
                    PunctajConcurent = PunctajConcurent / 100;
                }
                else
                {
                    suma = suma + ultimcif;
                    PunctajConcurent = PunctajConcurent / 10;
                }
            }
            if (suma > sumamax)
                sumamax = suma;
            sume[i] = suma;
            suma = 0;
        }
        for (int i = 1; i <= N; i++)
        {
            if (sume[i] == sumamax)
                concurenti++;

        }
        out << sumamax << " " << concurenti;
    }
    if (C == 2)
    {
        for (int i = 1; i <= N; i++)
        {
            suma = 0;
            in >> EchipaConcurent >> PunctajConcurent;
            while (PunctajConcurent != 0)//aflam suma puncatjelor fiecarui concurent de la fiecare proba
            {
                ultimcif = PunctajConcurent % 10;
                if (ultimcif == 0 && (PunctajConcurent / 10) % 10 == 1)
                {
                    suma = suma + 10;
                    PunctajConcurent = PunctajConcurent / 100;
                }
                else
                {
                    suma = suma + ultimcif;
                    PunctajConcurent = PunctajConcurent / 10;
                }
            }
            if (EchipaConcurent == 1)
            {
                PunctajEchipa1 = PunctajEchipa1 + suma;
            }
            if (EchipaConcurent == 2)
            {
                PunctajEchipa2 = PunctajEchipa2 + suma;
            }
            if (EchipaConcurent == 3)
            {
                PunctajEchipa3 = PunctajEchipa3 + suma;
            }
        }
        if (PunctajEchipa1 == PunctajEchipa2 and PunctajEchipa1==PunctajEchipa3 and PunctajEchipa1!=0 and PunctajEchipa2!=0 and PunctajEchipa3!=0)
            out << 1 << " " << 2 << " " << 3 << " " << PunctajEchipa1;
        if (PunctajEchipa1 > PunctajEchipa2 && PunctajEchipa1 > PunctajEchipa3)
            out << 1 << " " << PunctajEchipa1;
        if (PunctajEchipa2 > PunctajEchipa1 && PunctajEchipa2 > PunctajEchipa3)
            out << 2 << " " << PunctajEchipa2;
        if (PunctajEchipa3 > PunctajEchipa2 && PunctajEchipa3 > PunctajEchipa1)
            out << 3 << " " << PunctajEchipa3;
        if (PunctajEchipa1 == PunctajEchipa2 && PunctajEchipa1 > PunctajEchipa3)
            out << 1 << " " << 2 << " " << PunctajEchipa1;
        if (PunctajEchipa1 > PunctajEchipa2 && PunctajEchipa1 == PunctajEchipa3)
            out << 1 << " " << 3 << " " << PunctajEchipa1;
        if (PunctajEchipa1==0 and PunctajEchipa2==0 and PunctajEchipa3==0)
            out << "FARA CAMPION";
    }
}