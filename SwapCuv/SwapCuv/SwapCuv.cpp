#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main()
{
    char c[256], cuvinte[256][256];
    int cuv_total = 0, length_of_words[256];
    cin.getline(c, 256);
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
        {
            int j = 0;
            char cuvant[256];
            while (isalpha(c[i]))
            {
                cuvant[j] = c[i];
                j++;
                i++;
            }
            //strcpy(cuvinte[i], cuvant);
            length_of_words[cuv_total] = j;
            for (int p = 0; p < j; p++)
                cuvinte[cuv_total][p] = cuvant[p];
            cuv_total++;
        }
    }
    for (int i = 0; i < cuv_total / 2; i++)
    {
        for (int j = 0; j < length_of_words[i]; j++)
            cout << cuvinte[i][j];
        cout << endl;
        for (int j = 0; j < length_of_words[cuv_total - i - 1]; j++)
            cout << cuvinte[cuv_total - i - 1][j];
        cout << endl;
    }
    if (cuv_total % 2 == 1)
    {
        int j = 0;
        for (int j = 0; j < length_of_words[cuv_total / 2]; j++)
            cout << cuvinte[cuv_total / 2][j];
    }
    return 0;
}