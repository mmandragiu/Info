#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main()
{
    char c[105], * p, nr_max[101];
    int cifmax = -1;
    cin.getline(c, 101);
    p = strtok(c, " ");
    while (p != NULL)
    {
        if (p[0] > cifmax && isdigit(p[0]))
        {
            cifmax = p[0];
            strcpy(nr_max, p);
        }
        p = strtok(NULL, " ");
    }
    if (cifmax == -1)
        cout << "nu exista";
    else
        cout << nr_max;
    return 0;
}