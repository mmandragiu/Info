#include <fstream>
using namespace std;
ifstream in("sortare.in");
ofstream out("sortare.out");
void SortareVector(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n, i,v[101];
    in >> n;
    for (i = 0; i < n; i++)
        in >> v[i];
    SortareVector(v,n);
    for (i = n - 1; i >= 0; i--)
        out << v[i] << " ";
    return 0;
}