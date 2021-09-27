#include <fstream>
using namespace std;
bool prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}
int sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}

int main()
{
    ifstream in("vterminal.in");
    ofstream out("vterminal.out");
    int n, x, sumcif=0,v[100],contor=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (prim(x) == true)
        {
            v[contor] = x;
            contor++;
        }
    }
    for (int i = 0; i < contor; i++)
    {
        v[i] = sum(v[i]);
        sumcif = sumcif + v[i];
    }
    while (sumcif > 9)
        sumcif = sum(sumcif);
    out << sumcif;
    return 0;
}