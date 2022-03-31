#include <fstream>
#include <cmath>
using namespace std;

int n, a, b, c, nrdivimp, nr3div, minn, maxx;
const int NMAX = 1e6;
int Eratostene[NMAX + 1];
int main()
{
    ifstream in("cate.in");
    ofstream out("cate.out");
    Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i * i < 1000000; i++)
    {
        if (Eratostene[i] == 0)
            for (int j = 2; j <= 1000000 / i; j++)
                Eratostene[j * i] = 1;
    }
    in >> c >> n;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> a >> b;
            nrdivimp = 0;
            if (a < b)
                minn = a, maxx = b;
            else
                minn = b, maxx = a;
            int rad1 = (int)sqrt(maxx), rad2;
            if (sqrt(minn) != (int)sqrt(minn))
                rad2 = (int)sqrt(minn) + 1;
            else
                rad2 = (int)sqrt(minn);
            nrdivimp = rad1 - rad2 + 1;
            out << nrdivimp << '\n';
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            nr3div = 0;
            in >> a >> b;
            if (a < b)
                minn = a, maxx = b;
            else
                minn = b, maxx = a;
            int rad1 = (int)sqrt(maxx), rad2;
            if (sqrt(minn) != (int)sqrt(minn))
                rad2 = (int)sqrt(minn) + 1;
            else
                rad2 = (int)sqrt(minn);
            for (int j = rad2; j <= rad1; j++)
                if (Eratostene[j] == 0)
                    nr3div++;
            out << nr3div << '\n';
        }
    }
    in.close();
    out.close();
    return 0;
}