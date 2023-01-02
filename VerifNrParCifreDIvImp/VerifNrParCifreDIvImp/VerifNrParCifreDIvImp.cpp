#include <iostream>

using namespace std;

long long NrCif(long long n)
{
    int cif = 0;
    while (n)
        cif++, n /= 10;;
    return cif;
}

int main()
{
    int n;
    long long x;
    bool toatecifpare = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (NrCif(x) % 2 == 1)
            toatecifpare = false;
    }
    if (toatecifpare)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}