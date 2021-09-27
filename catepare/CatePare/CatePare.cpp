#include <iostream>
using namespace std;

int main()
{
    int n=1, gasit = 0;
    cin >> n;
    if (n % 2 == 0 and n != 0)
        gasit++;
    while (n != 0)
    {
        cin >> n;
        if (n % 2 == 0 and n != 0)
            gasit++;
    }
    if (gasit == 0)
        cout << "NU EXISTA";
    else
        cout << gasit;
}