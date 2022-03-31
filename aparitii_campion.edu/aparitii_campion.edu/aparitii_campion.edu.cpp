#include <fstream>
using namespace std;
int N, K, nr, cif[10], aux;

int main()
{
    ifstream in("aparitii.in");
    ofstream out("aparitii.out");
    in >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= 9; j++)
            cif[j] = 0;
        aux = i;
        while (aux)
            cif[aux % 10]++, aux /= 10;
        if (cif[K] != 0)
            nr++;
    }
    out << nr;
    return 0;
}