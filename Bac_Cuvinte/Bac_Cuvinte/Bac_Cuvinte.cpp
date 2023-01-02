#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[205], * p;
    int n, nr_cuv = 0;
    cin.getline(c, 205);
    cin >> n;
    p = strtok(c, " ");
    while (p != NULL)
    {
        if (strlen(p) == n)
            cout << p << endl, nr_cuv++;
        p = strtok(NULL, " ");
    }
    if (nr_cuv == 0)
        cout << "nu exista";
    return 0;
}