#include <fstream>
using namespace std;

unsigned long long x, k;
short c, ucif;
int main()
{
    ifstream in("rotire25.in");
    ofstream out("rotire25.out");
    in >> c >> x >> k;
    if (c == 1)
    {
        int copie = x;
        while (copie > 9)
            copie /= 10;
        if (x % 10 == 0)
            ucif = 0;
        if (x % 10 == 1)
            ucif = 1;
        if (x % 10 == 2)
        {
            if (k % 4 == 0)
                ucif = 6;
            if (k % 4 == 1)
                ucif = 2;
            if (k % 4 == 2)
                ucif = 4;
            if (k % 4 == 3)
                ucif = 8;
        }
        if (x % 10 == 3)
        {
            if (k % 4 == 0)
                ucif = 1;
            if (k % 4 == 1)
                ucif = 3;
            if (k % 4 == 2)
                ucif = 9;
            if (k % 4 == 3)
                ucif = 7;
        }
        if (x % 10 == 4)
        {
            if (x % 2 == 0)
                ucif = 6;
            else
                ucif = 4;
        }
        if (x % 10 == 5)
            ucif = 5;
        if (x % 10 == 6)
            ucif = 6;
        if (x % 10 == 7)
        {
            if (k % 4 == 0)
                ucif = 1;
            if (k % 4 == 1)
                ucif = 7;
            if (k % 4 == 2)
                ucif = 9;
            if (k % 4 == 3)
                ucif = 3;
        }
        if (x % 10 == 8)
        {
            if (k % 4 == 0)
                ucif = 6;
            if (k % 4 == 1)
                ucif = 2;
            if (k % 4 == 2)
                ucif = 4;
            if (k % 4 == 3)
                ucif = 8;
        }
        if (x % 10 == 9)
        {
            if (k % 2 == 0)
                ucif = 1;
            else
                ucif = 9;
        }
        out << copie * ucif;
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (i % 2 == 1)
            {
                x *= 5;
                unsigned long long copie = 0;
                while (x)
                {
                    if (x % 10)
                        copie = copie * 10 + x % 10;
                    x /= 10;
                }
                x = copie;
            }
            else
            {
                x *= 2;
                unsigned long long copie = 0;
                while (x)
                {
                    if (x % 10)
                        copie = copie * 10 + x % 10;
                    x /= 10;
                }
                x = copie;
            }
        }
        out << x;
    }
    return 0;
}