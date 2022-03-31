#include <fstream>
using namespace std;

ifstream in("numere2.in");
ofstream out("numere2.out");

int main()
{
    int v[25001], z = 0, n;
    in >> n;
    v[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        if (v[i] == v[i - 1])
        {
            z++; //crestem numarul de zile
            n -= 2; //eliminam perechea de elemente egale
            i -= 2; //daca numarul de elemente scade (perechea a fost stearsa), si indicele scade
        }
    }
    out << z << '\n';
    for (int i = 1; i <= n; i++)
        out << v[i] << " ";
    return 0;
}