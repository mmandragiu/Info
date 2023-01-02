#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main()
{
    char c[20], cuvinte[25][25];
    int n, k, contor = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        strcpy(cuvinte[contor], c);
        contor++;
    }
    cin >> k;
    for (int i = 0; i < contor; i++)
    {
        if (strlen(cuvinte[i]) == k)
            cout << cuvinte[i] << " ";
    }
    for (int i = 0; i < contor; i++)
    {
        if (strlen(cuvinte[i]) != k)
            cout << cuvinte[i] << " ";
    }
    return 0;
}