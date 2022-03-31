#include <fstream>
using namespace std;

long long k, n, celmaimic, celmaimare, elemente, contor, nr, s, randuri, coloana;

int main()
{
    ifstream in("stele.in");
    ofstream out("stele.out");
    contor = 1;
    bool found = false;
    in >> k >> n;
    nr = 1;
    s = -2;
    for (int i = 1; i <= k; i++)
    {
        s += 2;
        nr += s;
    }
    out << nr << '\n';
    s = -2;
    nr = 1;
    while (!found)
    {
        s += 2;
        nr += s;
        celmaimare = nr + contor - 1;
        celmaimic = nr - contor + 1;
        elemente = celmaimare - celmaimic + 1;
        if (n >= celmaimic && n <= celmaimare)
        {
            randuri = celmaimare - n + 1;
            coloana = contor;
            found = true;
        }
        contor++;
    }
    out << coloana << " " << randuri;
    in.close();
    out.close();
    return 0;
}