#include <fstream>

using namespace std;

void SortareVector(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] > v[i])
            {
                int copie = v[i];
                v[i] = v[j];
                v[j] = copie;
            }
        }
    }
}

int main()
{
    ifstream in("sortare_divizori.in");
    ofstream out("sortare_divizori.out");

    int n, v[1000], div[1000] = { 0 }, nrdiv = 0;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> v[i];
        for (int d = 1; d * d <= v[i]; d++)
        {
            if (v[i] % d == 0 and d * d == v[i])
                nrdiv++;
            if (v[i] % d == 0 and d * d < v[i])
                nrdiv += 2;
        }
        div[nrdiv] = v[i];
        nrdiv = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (div[i] != 0)
            out << div[i] << " ";
    }
}