#include <fstream>
using namespace std;

int main()
{
    ifstream in("maximpar.in");
    ofstream out("maximpar.out");
    long long n, x, max = -1000000000, aparitii = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (x > max and x%2==0)
        {
            max = x;
            aparitii = 1;
        }
        else
        {
            if (x == max and x%2==0)
                aparitii++;
        }
    }
    if (aparitii == 0)
        out << -1;
    else
        out << max << " " << aparitii;
    return 0;
}