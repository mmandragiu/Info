#include <iostream>
using namespace std;

int f[10], n;

int main()
{
    bool alte_cif = false;
    cin >> n;
    while (n)
    {
        f[n % 10]++;
        n /= 10;
    }
    for (int i = 2; i <= 9; i++)
    {
        if (f[i] != 0)
        {
            alte_cif = true;
            break;
        }
    }
    if (f[0] != 0 && f[1] != 0 && alte_cif == false)
        cout << "da";
    else
        cout << "nu";
    return 0;
}