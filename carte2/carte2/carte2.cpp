#include <fstream>
#include <cstring>
#include <math.h>
#include <stdio.h>

using namespace std;

#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

const int NMAX = 1100000 + 1;
int f[NMAX], carti_max, nr_gen, n, c, codare, perechi;
char cod[25];

bool putere_de_2(int x)
{
    while (x % 2 == 0)
        x /= 2;
    if (x == 1)
        return true;
    return false;
}

int main()
{
    ifstream in("carte.in");
    ofstream out("carte.out");
    in >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> cod;
        codare = 0;
        for (int j = 0; j < strlen(cod); j++)
        {
            if (isdigit(cod[j]))
                codare += (int)pow(2, cod[j] - 48);
            else
                codare += (int)pow(2, cod[j] - 87);
        }
        f[codare]++;
    }
    for (int i = 1; i <= 1100000; i++)
    {
        if (f[i] > carti_max)
        {
            carti_max = f[i];
            nr_gen = 1;
        }
        else
        {
            if (f[i] == carti_max)
                nr_gen++;
        }
    }
    if (c == 1)
        out << carti_max << endl << nr_gen;
    else
    {
        for (int i = 1; i < 1100000; i++)
        {
            if (f[i] != 0 && i!=codare)
            {
                int dif = abs(codare - i), putere = 0;
                bool found = false;
                while (!found && dif <= (int)pow(2, 20))
                {
                    dif += (int)pow(2, putere);
                    if (putere_de_2(dif) == true)
                        found = true;
                }
                if (found == true)
                    perechi += f[i];
            }
        }
        out << perechi;
    }
    return 0;
}