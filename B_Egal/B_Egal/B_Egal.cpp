#include <iostream>
using namespace std;

int Egal(int n)
{
    int cif_prev = -1;
    bool found = false;
    while (n)
    {
        if ((n % 10) % 2 == 1)
        {
            if (cif_prev == -1)
            {
                cif_prev = n % 10;
                found = true;
            }
            else
            {
                if (cif_prev == n % 10)
                    found = true;
                else
                {
                    found = false;
                    break;
                }
            }
        }
        n /= 10;
    }
    return found;
}

int main()
{
    int n;
    cin >> n;
    cout << Egal(n);
    return 0;
}