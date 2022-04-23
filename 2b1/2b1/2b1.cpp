#include <fstream>
using namespace std;

int main()
{
    ifstream in("2b1.in");
    ofstream out("2b1.out");
    unsigned long long n, c = 0, r, copie, cat, nr1 = 0;
    in >> n;
    for (unsigned long long i = 1; i <= n; i++)
    {
        copie = i;
        nr1 = 0;
        while (copie)
        {
            r = copie % 2;
            if (r == 1)
                nr1++;
            cat = copie / 2;
            copie = cat;
        }
        if (copie == 0 && nr1 == 2)
            out << i << " ";
    }
}