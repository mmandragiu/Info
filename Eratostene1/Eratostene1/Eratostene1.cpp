#include <fstream>
using namespace std;
ifstream in("eratostene1.in");
ofstream out("eratostene1.out");

int main()
{
    int n,x,prime=0,nrdiv=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        for (int d = 1; d * d <= x; d++)
        {
            if (x % d == 0)
            {
                nrdiv++;
                if (d * d < n)
                    nrdiv++;
            }
        }
        if (nrdiv == 2)
            prime++;
        nrdiv = 0;
    }
    out << prime;
    return 0;
}