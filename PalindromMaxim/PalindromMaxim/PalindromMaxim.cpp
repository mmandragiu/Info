#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

bool palindrom(char *x)
{
    bool ok = true;
    char *copie = new char[strlen(x)];
    strcpy(copie, x);
    for (int i = 0; i < strlen(copie); i++)
        copie[i] = toupper(copie[i]);
    for (int i = 0; i < strlen(copie) / 2; i++)
    {
        if (copie[i] != copie[strlen(copie) - i - 1])
        {
            ok = false;
            break;
        }
    }
    return ok;
}

int main()
{
    char c[256], * p, cuv[21];
    int lmax = 0;
    cin.getline(c, 256);
    p = strtok(c, " :;.,");
    while (p != NULL)
    {
        int l = strlen(p);
        if (palindrom(p))
        {
            if (l > lmax)
            {
                lmax = l;
                strcpy(cuv, p);
            }
        }
        p = strtok(NULL, " :;.,");
    }
    cout << cuv;
    return 0;
}