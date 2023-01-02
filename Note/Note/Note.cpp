#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sir[101], * p;
    bool exista = false;
    cin.getline(sir, 100);
    p = strtok(sir, " ");
    while (p != NULL)
    {
        if (strstr(p, "do") || strstr(p, "re") || strstr(p, "mi") || strstr(p, "fa") || strstr(p, "sol") || strstr(p, "la") || strstr(p, "si"))
            cout << p << endl, exista = true;
    }
    if (!exista)
        cout << "nu exista";
    return 0;
}