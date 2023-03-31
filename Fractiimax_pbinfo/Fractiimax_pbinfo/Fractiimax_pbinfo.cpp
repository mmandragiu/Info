#include <iostream>
using namespace std;

struct fractie
{
    int numarator, numitor;
};

fractie fr1, fr2, frfinal;

int cmmdc(int a, int b)
{
    int r = a % b;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    cin >> fr1.numarator >> fr1.numitor >> fr2.numarator >> fr2.numitor;
    if (fr1.numarator / fr1.numitor > fr2.numarator / fr2.numitor)
    {
        frfinal.numarator = fr1.numarator;
        frfinal.numitor = fr1.numitor;
    }
    else
    {
        frfinal.numarator = fr2.numarator;
        frfinal.numitor = fr2.numitor;
    }
    int div_com = cmmdc(frfinal.numarator, frfinal.numitor);
    cout << frfinal.numarator / div_com << " " << frfinal.numitor / div_com;
    return 0;
}