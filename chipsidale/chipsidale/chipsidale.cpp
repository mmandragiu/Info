#include <fstream>
using namespace std;

int n, chip, sacichip, dale, sacidale;
const int NMAX = 1e3;
int v[NMAX];

int main()
{
    ifstream in("chipsidale.in");
    ofstream out("chipsidale.out");
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    while (n > 2)
    {
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                v[i] = v[i] + v[n - i + 1];
                v[n - i + 1] = 0;
            }
            sacichip++;
            chip += v[n / 2];
            v[n / 2] = 0;
            n = n / 2 - 1;
        }
        else
        {
            for (int i = 1; i <= (n - 1) / 2; i++)
            {
                v[i] = v[i] + v[n - i + 1];
                v[n - i + 1] = 0;
            }
            sacichip++;
            chip += v[(n - 1) / 2 + 1];
            v[(n - 1) / 2 + 1] = 0;
            n = n - (n - 1) / 2 - 1;
        }
    }
    if (n == 1)
        sacidale = 1, dale = v[1];
    if (n == 2)
        sacidale = 2, dale = v[1] + v[2];
    out << sacichip << " " << chip << '\n' << sacidale << " " << dale;
    in.close();
    out.close();
    return 0;
}