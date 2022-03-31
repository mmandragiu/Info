#include <fstream>
#include <cmath>
using namespace std;

int n, x, nr, maxx;
unsigned int f[1000001];

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
int main()
{
    
    ifstream in("treidiv.in");
    ofstream out("treidiv.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        f[x]++;
        maxx = max(maxx, x);
    }
    for (int i = 0; i <= maxx; i++)
    {
        if (f[i])
        {
            if ((int)sqrt(i) == sqrt(i) && Prim((int)sqrt(i)) == true)
                nr += f[i];
        }
    }
    out << nr;
    in.close();
    out.close();
    return 0;
}