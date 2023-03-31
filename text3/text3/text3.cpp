#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

#pragma warning(disable:4996)

char cv[200000], * p, matrix[500][500], new_c[200000],pal_cur[500],pal_max[500];
int length_no_space, n, m, cer, contor;

bool palindrom(char v[])
{
    for (int i = 0; i < strlen(v); i++)
    {
        if (v[i] != v[strlen(v) - i - 1])
            return false;
    }
    return true;
}

int main()
{
    ifstream in("text.in");
    ofstream out("text.out");
    in >> cer;
    in.get();
    in.get(cv, 200000);
    for (int i = 0; i < strlen(cv); i++)
    {
        if (cv[i] != ' ')
        {
            contor++;
            char character = cv[i];
            new_c[contor] = character;
            length_no_space++;
        }
    }
    cout << new_c << endl << endl;
    for (int d = 1; d * d <= length_no_space; d++)
    {
        if (length_no_space % d == 0)
        {
            n = d;
            m = length_no_space / d;
        }
    }
    int l = 1, col = 0;
    for (int i = 1; i <= contor; i++)
    {
        col++;
        if (col > m)
        {
            l++;
            col = 1;
        }
        matrix[l][col] = new_c[i];
    }
    if (cer == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                out << matrix[i][j];
            out << endl;
        }
    }
    if (cer == 2)
    {
        for (int l = 1; l <= n; l++)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m - l + 1; j++)
                {
                    memset(pal_cur, 0, 500);
                    for (int k = 0; k <= j + l - 2; k++)
                        pal_cur[k] = matrix[i][k + 1];
                    if (palindrom(pal_cur) == true)
                    {
                        if (strlen(pal_cur) > strlen(pal_max))
                            strcpy(pal_max, pal_cur);
                        else
                        {
                            if (strcmp(pal_cur, pal_max) > 0)
                                strcpy(pal_max, pal_cur);
                        }
                    }
                }
            }
            for (int j = 1; j <= m; j++)
            {
                for (int i = 1; i <= n - l + 1; i++)
                {
                    memset(pal_cur, 0, 500);
                    for (int k = 0; k <= i + l - 2; k++)
                        pal_cur[k] = matrix[k + 1][j];
                    if (palindrom(pal_cur) == true)
                    {

                        if (strlen(pal_cur) > strlen(pal_max))
                            strcpy(pal_max, pal_cur);
                        else
                        {
                            if (strcmp(pal_cur, pal_max) > 0)
                                strcpy(pal_max, pal_cur);
                        }
                    }
                }
            }
        }
        out << pal_max;
    }
    return 0;
}