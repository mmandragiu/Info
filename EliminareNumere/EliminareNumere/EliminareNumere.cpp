#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
    char c[101], * p;
    bool ok[101];
    cin.getline(c, 101);
    for (int i = 0; i < strlen(c); i++)
        ok[i] = true;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '.')
        {
            int st = i - 1, dr = i + 1;
            while ((c[st] != ' ' && !isalpha(c[st])) && st >= 0)
                st--;
            st++;
            while ((c[dr] != ' ' && !isalpha(c[dr])) && dr <= strlen(c) - 1)
                dr++;
            dr--;
            for (int j = st; j <= dr; j++)
                ok[j] = false;
        }
    }
    for (int i = 0; i < strlen(c); i++)
        if (ok[i])
            cout << c[i];
    return 0;
}