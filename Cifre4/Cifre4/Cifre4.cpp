#include <fstream>
using namespace std;
ifstream cin("cifre4.in");
ofstream cout("cifre4.out");

int main()
{
    int n, cifmax = -1, cifpp = 0, cif = 0, v[11] = { 0 },nrmax=-1;
    cin >> n;
    while (n != 0)
    {
        v[cif] = n % 10;
        if (n % 10 > cifmax)
            cifmax = n % 10;
        if (n % 10 == 0 or n % 10 == 1 or n % 10 == 4 or n % 10 == 9)
            cifpp++;
        cif++;
        n = n / 10;
    }
    for (int i = 0; i < cif - 1; i++)
    {
        if (v[i] + v[i + 1] * 10 > nrmax)
            nrmax = v[i] + v[i + 1] * 10;
    }
    cout << cifmax << '\n' << cifpp << endl << nrmax;
    return 0;
}