#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
    char c[256], sir_max[256] = " ", aux[256] = " ";
    cin.getline(c, 256);
    int n = strlen(c), lg_max = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            int contor = 0;
            char subsir[256] = " ";
            for (int k = j; k <= j + i - 1; k++)
                subsir[contor] = c[k], contor++;
            int contor_1 = 0;
            for (int k = j + i - 1; k <= n - 1; k++)
                aux[contor_1] = c[k], contor_1++;
            if (strstr(aux, subsir))
            {
                if (strlen(subsir) > lg_max)
                    strcpy(sir_max, subsir), lg_max = strlen(subsir);
                else
                {
                    if (strlen(subsir) == lg_max)
                    {
                        if (strcmp(subsir, sir_max) < 0)
                            strcpy(sir_max, subsir);
                    }
                }
            }
        }
    }
    cout << sir_max;
}