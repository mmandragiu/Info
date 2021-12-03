#include <fstream>
using namespace std;

ifstream in("cifre10.in");
ofstream out("cifre10.out");

int main()
{
    unsigned long long p, n, x, y, f1[10] = { 0 }, f2[10] = { 0 }, cutiute = 0, max = 0, nr = 0;
    in >> p >> n; 
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        found = false;
        in >> x >> y;
        nr = 0;
        for (int i = 0; i < 10; i++)
        {
            f1[i] = 0;
            f2[i] = 0;
        }
        while (x)
        {
            f1[x % 10]++;
            x /= 10;
        }
        while (y)
        {
            f2[y % 10]++;
            y /= 10;
        }
        for (int i = 9; i >= 0; i--)
        {
            if (f1[i] > 0 && f2[i] > 0)
            {
                found = true;
                unsigned long long min;
                if (f1[i] < f2[i])
                    min = f1[i];
                else
                    min = f2[i];
                for (int j = 0; j < min; j++)
                    nr = nr * 10 + i;
            }
        }
        if (nr > max)
            max = nr;
        if (found == true)
            cutiute++;
    }
    if (p == 1)
    {
        out << cutiute;
    }
    else
        out << max;
}