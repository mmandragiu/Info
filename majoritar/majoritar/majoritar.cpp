#include <fstream>
using namespace std;

const int NMAX = 3e6 + 1;
int v[NMAX], n, candidat, dif, nr_apar;

int main()
{
    ifstream in("majoritar.in");
    ofstream out("majoritar.out");
    in >> n;
    in >> v[1];
    candidat = v[1];
    dif = 1;
    for (int i = 2; i <= n; i++)
    {
        in >> v[i];
        if (candidat != v[i])
        {
            dif--;
            if (dif == 0)
                candidat = v[i];
        }
        if (candidat == v[i])
            dif++;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] == candidat)
            nr_apar++;
    }
    if (nr_apar >= n/2+1)
    {
        out << candidat << " " << nr_apar;
    }
    else
        out << -1;
    return 0;
}