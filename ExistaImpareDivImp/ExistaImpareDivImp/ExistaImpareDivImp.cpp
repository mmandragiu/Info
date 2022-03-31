#include <iostream>
using namespace std;

int n, x;

int main()
{
    bool exista = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
            exista = true;
    }
    if (exista == true)
        cout << "DA";
    else
        cout << "NU";
}