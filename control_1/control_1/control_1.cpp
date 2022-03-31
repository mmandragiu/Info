#include <fstream>
#include <algorithm>
using namespace std;

bool Prim(int n)
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

int n, x, f[201], fnou[201], v[67], nr_1, nr_0, maxx, minn, j, k;
int main()
{
    minn = 100000;
    ifstream in("control.in");
    ofstream out("control.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (x > maxx)
            maxx = x;
        if (x < minn)
            minn = x;
        f[x]++;
    }
    in.close();
    for (int i = 0; i <= maxx; i++)
    {
        if (f[i] != 0)
        {
            fnou[j] = f[i];
            j++;
        }
    }
    for (int i = 0; i < j - j % 3; i += 3)
    {
        if (fnou[i] % 2 == fnou[i + 1] % 2 && fnou[i] % 2 == fnou[i + 2] % 2)
            v[k] = 1;
        else
            v[k] = 0;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        if (v[i] == 1)
            nr_1++;
        if (v[i] == 0)
            nr_0++;
    }
    out << nr_1 * 10 + nr_0 << '\n';
    if (Prim(nr_1 * 10 + nr_0) == true)
        out << 1;
    else
        out << 0;
    out.close();
    return 0;
}