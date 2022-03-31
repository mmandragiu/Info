#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int a[100000], b[100000], c[100000];

ifstream in("intersectie.in");
ofstream out("intersectie.out");

int main()
{
    int x, nrelementea = 0, nrelementeb = 0, nrelementec = 0, m, n, comune = 0;
    bool gasit = false;
    while (in >> x && x != 0) {
        a[nrelementea] = x;
        nrelementea++;
    }

    while (in >> x) {
        if (x == 0) {
            m = 0;
            n = 0;
            nrelementec = 0;
            while (m < nrelementea && n < nrelementeb) {
                if (a[m] == b[n])
                {
                    c[nrelementec] = a[m];
                    m++;
                    n++;
                    nrelementec++;
                }
                else if (a[m] < b[n])
                    m++;
                else
                    n++;
            }
            for (int i = 0; i < nrelementec; i++)
                a[i] = c[i];
            nrelementea = nrelementec;

            nrelementeb = 0;
        }
        else
        {
            b[nrelementeb] = x;
            nrelementeb++;
        }
    }

    for (int i = 0; i < nrelementec; i++)
    {
        out << c[i] << " ";
        comune++;
    }
    if (comune == 0)
        out << "nu exista";

}