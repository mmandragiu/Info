#include <fstream>
using namespace std;

ifstream in("cifru1.in");
ofstream out("cifru1.out");

int main()
{
    long long n, v[100000], x, min = 1000001, combinatii = 0, maxcif = -1, cifmin = 10, a, b, rotiri = 0, posibilitati = 1;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        v[i] = x;
        if (x > maxcif)
            maxcif = x;
    }
    out << maxcif << '\n';
    for (int i = 9; i >= 0; i--)
    {
        rotiri = 0;
        for (int j = 0; j < n; j++)
        {
            if (i < v[j])
            {
                a = i;
                b = v[j];
            }
            else
            {
                a = v[j];
                b = i;
            }
            if (b - a < a + 10 - b)
                rotiri += b - a;
            else
                rotiri += a + 10 - b;
        }
        if (rotiri < min)
        {
            min = rotiri;
            posibilitati = 1;
        }
        if (rotiri == min)
        {
            posibilitati++;
            if (i < cifmin)
                cifmin = i;
        }
    }
    out << min << '\n' << cifmin << '\n' << posibilitati - 1;
}