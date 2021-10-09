#include <iostream>
using namespace std;

int Cif1CautareBinara(int n)
{
    int cat = 0;
    bool found = false;
    if (n % 2 == 0)
        return false;
    else
        cat = n / 2;
    while (cat % 2 == 1 and cat>0)
    {
        cat = cat / 2;
    }
    if (cat == 0)
        return true;
    else
        return false;
}

int main()
{
    unsigned long long n, x, lungime = 0, max_lungime = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (Cif1CautareBinara(x) == true)
            lungime++;
        else
        {
            if (lungime > max_lungime)
                max_lungime = lungime;
            lungime = 0;
        }
    }
    max_lungime = max(lungime, max_lungime);
    cout << max_lungime;
}