#include <fstream>
using namespace std;

int v[100001], indici[100001], n, k, muntiscufundati, c;

int main()
{
    ifstream in("atlantis.in");
    ofstream out("atlantis.out");
    in >> c >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        indici[i] = i;
        in >> v[i];
        if (v[i] - k < 0)
            muntiscufundati++;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                int aux1 = v[j];
                v[j] = v[i];
                v[i] = aux1;
                int aux2 = indici[j];
                indici[j] = indici[i];
                indici[i] = aux2;
            }
        }
    }
    if (c == 1)
        out << muntiscufundati;
    if (c == 2)
    {
        for (int i = 1; i <= n; i++)
            out << indici[i] << " ";
    }
}