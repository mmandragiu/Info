#include <fstream>
using namespace std;

long long n, c, perechi_consec, new_n, new_n1, new_n2, new_n3, maxx, v[100001], previous;

int main()
{
    ifstream in("vecine.in");
    ofstream out("vecine.out");
    in >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        if (i == 1)
            previous = v[i];
        else
        {
            if (v[i] == previous + 1)
                perechi_consec++;
        }
        previous = v[i];
    }
    if (c == 1)
        out << perechi_consec;
    else
    {
        for (int k = 1; k <= 10; k++)
        {
            for (int i = 1; i <= n - 2 * k + 1; i++) {
                new_n1 = 0, new_n2 = 0, new_n3 = 0, new_n = 0;
                for (int j = i; j <= i + k - 1; j++)
                    new_n = new_n * 10 + v[j], new_n2=new_n2*10+v[j];
                for (int j = i + k; j <= i + 2 * k; j++)
                {
                    if (j < i + 2 * k)
                        new_n1 = new_n1 * 10 + v[j];
                    new_n3 = new_n3 * 10 + v[j];
                }
                if (new_n + 1 == new_n1)
                {
                    if (new_n > maxx)
                        maxx = new_n;
                }
                else
                {
                    if (new_n2 + 1 == new_n3)
                    {
                        if (new_n2 > maxx)
                            maxx = new_n2;
                    }
                }
            }
        }
        out << maxx;
    }
}