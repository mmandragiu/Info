#include <fstream>
#include <algorithm>
using namespace std;
ifstream in("magic1.in");
ofstream out("magic1.out");

int main()
{
    int n, v[1000] = { 0 }, cifmin = 10;
    char x,copiex;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        copiex = x;
        if (x >= 97 && x <= 122)
            out << (char)(x-32);
        if (x <= 9 && x >= 1)
            v[x] = x;
        if (x == 0)
            v[0] = 1;
    }
    out << '\n';
    for (int i = 0; i < 10; i++)
    {
        if (i == 0 && v[i] == 1)
            continue;
        else
            if (v[i] != 0 && v[i] < cifmin && i>0)
                cifmin = v[i];
    }
    out << cifmin;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0 && v[i] == 1)
            out << 0;
        if (v[i] != 0 && i > 0 && v[i]!=cifmin)
            out << v[i];
    }
}