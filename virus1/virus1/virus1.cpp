#include <fstream>
#include <cstring>
using namespace std;

#pragma warning(disable:4996)

char virus[205], mutatie[205],mutatie_max[205],virusuri[50001][201];
int cer, n, mutatii, mutatii_max;

int dif_egale(char a[], char b[])
{
    int dif = 0;
    for (int i = 0; i < strlen(a); i++)
        if (a[i] != b[i])
            dif++;
    return dif;
}

bool same_arrays(char x[], char y[])
{
    if (strlen(x) != strlen(y))
        return false;
    for (int i = 0; i < strlen(x); i++)
        if (x[i] != y[i])
            return false;
    return true;
}

int main()
{
    ifstream in("virus1.in");
    ofstream out("virus1.out");
    in >> cer;
    in.get();
    in.get(virus, 201);
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in.get();
        in.get(mutatie, 201);
        strcpy(virusuri[i], mutatie);
        if (strlen(virus) != strlen(mutatie))
            continue;
        else
            if (dif_egale(virus, mutatie) == 1)
            {
                mutatii++;
            }
    }
    if (cer == 1)
    {
        out << mutatii;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (strlen(virus) != strlen(virusuri[i]))
                continue;
            else
            {
                int apar = 1;
                for (int j = i + 1; j <= n; j++)
                {
                    if (same_arrays(virusuri[i], virusuri[j]) == true)
                        apar++;
                }
                if (apar > mutatii_max)
                {
                    mutatii_max = apar;
                    strcpy(mutatie_max, virusuri[i]);
                }
                else
                {
                    if (apar == mutatii_max)
                    {
                        if (strcmp(virusuri[i], mutatie_max) < 0)
                            strcpy(mutatie_max, virusuri[i]);
                    }
                }
            }
        }
        out<<mutatie_max;
    }
    return 0;
}