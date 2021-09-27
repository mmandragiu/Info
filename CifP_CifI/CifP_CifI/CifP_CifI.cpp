#include <iostream>
using namespace std;

int main()
{
    int a, b,cifpa=0,cifpb=0,cifia=0,cifib=0;
    cin >> a >> b;
    if (a % 2 == b % 2)
    {
        while (a)
        {
            if ((a % 10) % 2 == 0)
                cifpa++;
            a = a / 10;
        }
        while (b)
        {
            if ((b % 10) % 2 == 0)
                cifpb++;
            b = b / 10;
        }
        cout << cifpa + cifpb;
        return 0;
    }
    else
    {
        while (a)
        {
            if ((a % 10) % 2 == 1)
                cifia++;
            a = a / 10;
        }
        while (b)
        {
            if ((b % 10) % 2 == 1)
                cifib++;
            b = b / 10;
        }
        cout << cifia + cifib;
        return 0;
    }
    return 0;
}