#include <iostream>
using namespace std;

int main()
{
    int n, x, cifmin = 10, min = 0,primacif,copiex;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        copiex = x;
        while (x != 0)
        {
            if (x / 10 == 0)
            {
                primacif = x;
                break;
            }
            else
                x = x / 10;
        }
        if (primacif == cifmin)
            min = max(min, copiex);
        if (primacif < cifmin)
        {
            cifmin = primacif;
            min = copiex;
        }
    }
    cout << min;
    return 0;
}