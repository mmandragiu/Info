#include <fstream>
using namespace std;

bool prime[3000001];
unsigned long long  x, n, s, nr;

int main()
{
    ifstream in("prime.in");
    ofstream out("prime.out");
    in >> x >> n;
    prime[0] = true, prime[1] = true;
    for (int i = 2; i * i < 3000000; i++)
    {
        if (prime[i] == false)
            for (int j = 2; j <= 3000000 / i; j++)
                prime[i * j] = true;
    }
    bool found = false;
    unsigned long long copie = x;
    while (!found)
    {
        if (prime[copie] == false)
        {
            found = true;
            break;
        }
        else
            copie--;
    }
    out << copie << '\n';
    bool gata = false;
    copie = x + 1;
    while (!gata)
    {
        if (prime[copie] == false)
        {
            nr++;
            s += copie;
            copie++;
        }
        else
            copie++;
        if (nr == n)
        {
            gata = true;
            break;
        }
    }
    out << s;
}