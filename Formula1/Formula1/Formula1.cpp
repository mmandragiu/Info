#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("formula1.in");
ofstream cout("formula1.out");

int main()
{
    unsigned long long int k, n, c, a = 0, albe = 0, negre = 0, total_patratele=0,x=0,total_albe=0,patrate=0;
    cin >>c>> k >> n;
    if (c == 1)
    {
        total_patratele = (2 * k - 1) * (2 * k - 1);
        cout << total_patratele;
    }
    else
    {
        total_albe = (n * (n + 1) * (2 * n + 1)) / 3 - (n * (n + 1));
        x = (int)sqrt(2 * total_albe + 1);
        if (x % 2 == 0)
            x -= 1;
        patrate = x*x;
        cout << patrate;
    }
    return 0;
}