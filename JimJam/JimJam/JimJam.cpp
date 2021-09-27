#include <fstream>
using namespace std;
ifstream cin("jimjam.in");
ofstream cout("jimjam.out");

int main()
{
    int A, B, Z, D, kilo = 0, ok = 0, kilo2 = 0;
    cin >> A >> B >> Z >> D;
    for (int i = 1; i <= Z; i++)
        if (i % 2 == 1)
            kilo += A;
        else
            kilo -= B;
    int i = 1;
    cout << kilo << " ";
    if (A - B == 1)
    {
        cout << D * 2;
        return 0;
    }
    if (A == B)
    {
        if (A == D)
            cout << 1;
        return 0;
    }
    while (kilo2 != D)
    {
        if (i % 2 == 1)
            kilo2 += A;
        else
            kilo2 -= B;
        if (kilo2 == D)
        {
            ok = 1;
            break;
        }
        i++;
    }
    if (ok == 1)
        cout << i;
    else
        cout << 0;
}