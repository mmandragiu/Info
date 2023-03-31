#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

bool voc(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int NrVoc(char* x)
{
    int nrvocale = 0;
    for (int i = 0; i < strlen(x); i++)
    {
        if (voc(x[i]))
            nrvocale++;
    }
    return nrvocale;
}

int stricmp(char* x, char* y)
{
    int length = strlen(x) < strlen(y) ? strlen(x) : strlen(y);
    char a[256], b[256];
    strcpy(a, x), strcpy(b, y);
    int i = 0;
    int comparatie;
    for (int j = 0; j < strlen(a); j++)
        a[j] = tolower(a[j]);
    for (int j = 0; j < strlen(b); j++)
        b[j] = tolower(b[j]);
    for (i = 0; i < length; i++)
    {
        if (a[i] == b[i])
        {
            comparatie = 0;
            continue;
        }
        else
        {
            if (a[i] < b[i])
            {
                comparatie = -1;
                break;
            }
            else
            {
                comparatie = 1;
                break;
            }
        }
    }
    return comparatie;
}

int main()
{
    int vocale[256];
    char c[256], * p, cuvinte[256][256];
    cin.getline(c, 256);
    p = strtok(c, " ");
    int cnt = 0;
    while (p != NULL)
    {
        strcpy(cuvinte[cnt], p);
        p = strtok(NULL, " ");
        cnt++;
    }
    for (int i = 0; i < cnt; ++i)
        vocale[i] = NrVoc(cuvinte[i]);
    for (int i = 0; i < cnt; ++i)
    {
        for (int j = i + 1; j < cnt; ++j)
            if (vocale[j] > vocale[i])
            {
                swap(cuvinte[j], cuvinte[i]);
                swap(vocale[j], vocale[i]);
            }
    }
    for (int i = 0; i < cnt; ++i)
        for (int j = i + 1; j < cnt; ++j)
            if (strlen(cuvinte[j]) > strlen(cuvinte[i]) && vocale[j] == vocale[i])
                swap(cuvinte[j], cuvinte[i]);
    for (int i = 0; i < cnt; ++i)
        for (int j = i + 1; j < cnt; ++j)
            if (vocale[i] == vocale[j] && strlen(cuvinte[i]) == strlen(cuvinte[j]) && strcmp(cuvinte[i], cuvinte[j]) == 1)
                swap(cuvinte[j], cuvinte[i]);
    for (int i = 0; i < cnt; ++i)
        cout << cuvinte[i] << endl;
    return 0;
}