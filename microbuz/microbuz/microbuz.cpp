#include <fstream>

using namespace std;

int v[11];

int main()
{
    ifstream in("microbuz.in");
    ofstream out("microbuz.out");

    int k, n, c, pret, minpret = 99 * 10, m;
    in >> c;
    for (int i = 1; i <= 10; i++)
    {
        in >> v[i];
    }
    in >> n;
    for (int i = 1; i <= 10; i++)
    {
        k = i;
        pret = v[i];
        int contor = 1;
        for (int j = i; j <= 10; j++)
        {
            if (k + j < n)
            {
                k = k + j;
                pret = pret + v[j];
                if (k == n && minpret > pret)
                {
                    minpret = pret;
                }
                for (m = j; m <= 10; m++)
                {
                    if (k + m <= n)
                    {
                        k = k + m;
                        pret = pret + v[m];
                        if (k == n && minpret > pret)
                        {
                            minpret = pret;
                        }
                    }
                }
            }
        }
    }
    if (c == 1)
        out << minpret - 1;
    return 0;
}