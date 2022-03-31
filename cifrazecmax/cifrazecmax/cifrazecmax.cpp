#include <fstream>
using namespace std;

ifstream in("cifrazecmax.in");
ofstream out("cifrazecmax.out");

int cifzec(int n)
{
    return (n % 100) / 10;
}

int main()
{
    int i = 0, v[10000], max = -1, poz = -1, f[10] = { 0 };
    while (in >> v[i])
    {
        f[cifzec(v[i])]++;
        i++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (f[i] > max)
            max = f[i];
    }
    i--;
    for (int k = i; k >= 0; k--) {
        if (f[cifzec(v[k])] == max)
        {
            poz = k + 1;
            break;
        }
    }
    if (poz == -1)
        out << 1;
    else
        out << poz;
    return 0;
}