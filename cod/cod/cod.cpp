#include <fstream>
using namespace std;


int main()
{
    ifstream in("cod.in");
    ofstream out("cod.out");
    char c;
    long long n, x, cerinta, nr_c_1 = 0, parola_i, parola_g, nr2 = 0, nr3 = 0, nr4 = 0, nr5 = 0, nr6 = 0, nr7 = 0, nr8 = 0, nr9 = 0, nr10 = 0, nr11 = 0, nr12 = 0, nr13 = 0, nr14 = 0, nr15 = 0;
    in >> cerinta >> n;
    if (cerinta == 1)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            in >> x >> c;
            if (x % 2 != 0 && x % 3 != 0 && x % 4 != 0 && x % 5 != 0 && x % 6 != 0 && x % 7 != 0 && x % 8 != 0 && x % 9 != 0 && x % 10 != 0 && x % 11 != 0 && x % 12 != 0 && x % 13 != 0 && x % 14 != 0 && x % 15 != 0)
                nr_c_1++;
        }
        in >> x;
        if (x % 2 != 0 && x % 3 != 0 && x % 4 != 0 && x % 5 != 0 && x % 6 != 0 && x % 7 != 0 && x % 8 != 0 && x % 9 != 0 && x % 10 != 0 && x % 11 != 0 && x % 12 != 0 && x % 13 != 0 && x % 14 != 0 && x % 15 != 0)
            nr_c_1++;
        out << nr_c_1;
    }
    if (cerinta == 2)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            in >> x >> c;
            if (x % 2 == 0)
                nr2++;
            if (x % 3 == 0)
                nr3++;
            if (x % 4 == 0)
                nr4++;
            if (x % 5 == 0)
                nr5++;
            if (x % 6 == 0)
                nr6++;
            if (x % 7 == 0)
                nr7++;
            if (x % 8 == 0)
                nr8++;
            if (x % 9 == 0)
                nr9++;
        }
        in >> x;
        if (x % 2 == 0)
            nr2++;
        if (x % 3 == 0)
            nr3++;
        if (x % 4 == 0)
            nr4++;
        if (x % 5 == 0)
            nr5++;
        if (x % 6 == 0)
            nr6++;
        if (x % 7 == 0)
            nr7++;
        if (x % 8 == 0)
            nr8++;
        if (x % 9 == 0)
            nr9++;
        out << nr2 + nr3 + nr4 + nr5 + nr6 + nr7 + nr8 + nr9;
    }
    if (cerinta == 3)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            in >> x >> c;
            if (x % 10 == 0)
                nr10++;
            if (x % 11 == 0)
                nr11++;
            if (x % 12 == 0)
                nr12++;
            if (x % 13 == 0)
                nr13++;
            if (x % 14 == 0)
                nr14++;
            if (x % 15 == 0)
                nr15++;
        }
        in >> x;
        if (x % 10 == 0)
            nr10++;
        if (x % 11 == 0)
            nr11++;
        if (x % 12 == 0)
            nr12++;
        if (x % 13 == 0)
            nr13++;
        if (x % 14 == 0)
            nr14++;
        if (x % 15 == 0)
            nr15++;
        out << nr10 + nr11 + nr12 + nr13 + nr14 + nr15;
    }
    return 0;
}