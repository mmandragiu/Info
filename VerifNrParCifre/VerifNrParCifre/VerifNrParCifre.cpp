#include <iostream>
using namespace std;

int main()
{
    long long v[100] = { 0 }, n, x, cif=0;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        while (v[i])
        {
            cif++;
            v[i] /= 10;
        }
        if (cif % 2 == 0)
            found = true;
        else
        {
            found = false;
            break;
        }
        cif = 0;
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}