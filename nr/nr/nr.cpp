#include <fstream>
#include <cmath>
using namespace std;

unsigned long long v[10000], k, n, x, contor, cifinceput;

int main()
{
    ifstream in("nr.in");
    ofstream out("nr.out");
    v[0] = 0, v[1] = 1, v[2] = 20, v[3] = 21;
    contor = 3;
    cifinceput = 3;
    in >> k >> n >> x;
    out << (int)pow(2, k - 1) << '\n';
    while (v[contor] <= x || contor<=n)
    {
        int nr = pow(2, cifinceput - 1);
        contor++;
        v[contor] = (int)cifinceput * pow(10, cifinceput - 1);
        int indice = contor;
        contor++;
        for (int i = 2; i <= nr; i++)
            v[contor] = v[indice] + v[i - 1], contor++;
        cifinceput++;
        contor--;
    }
    out << v[n] << '\n';
    while (v[contor] > x)
        contor--;
    out << v[contor];
}