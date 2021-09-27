#include <iostream>
using namespace std;

int main()
{
    int primaapritie=0, ultimaparitie=0, v[1100], n, suma = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            ultimaparitie = i;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (v[i] % 2 == 0)
            primaapritie = i;
    }
    for (int i = primaapritie; i <= ultimaparitie; i++)
        suma = suma + v[i];
    if (primaapritie==ultimaparitie and primaapritie==0 and ultimaparitie==0)
        cout << "NU EXISTA";
    else
        cout << suma;
}