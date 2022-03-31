#include <fstream>
using namespace std;

int main()
{
    ifstream in("divizori.in");
    ofstream out("divizori.out");
    unsigned long long m, k, a, b, cmmmc, p, j = 0;
    in >> m >> k;
    a = k + 1;
    for (int i = k + 2; i <= m - 1; i++)
    {
        b = i;
        p = a * b;
        while (b)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        cmmmc = p / a;
        a = cmmmc;
    }
    bool found = false;
    while (found == false)
    {
        if ((cmmmc * j + k) % m == 0)
            found = true;
        else
            j++;
    }
    out << cmmmc * j + k;
    return 0;
}