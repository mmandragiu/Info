#include <fstream>
#include <algorithm>
using namespace std;

int v[100001], indici[100001], n, k, muntiscufundati, c, v_aux_1[100001], v_aux_2[100001];

void SortareVector(int v[], int indici[], int) {
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
                swap(indici[i], indici[j]);
            }
        }
    }
}

int main()
{
    ifstream in("atlantis.in");
    ofstream out("atlantis.out");
    in >> c >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        indici[i] = i;
        in >> v[i];
        v_aux_1[i] = v[i];
        if (v[i] - k < 0)
            muntiscufundati++;
    }
    if (c == 1)
    {
        out << muntiscufundati;
    }
    if (c == 2)
    {
        SortareVector(v, indici, n);
        for (int i = 1; i <= n; i++)
            out << indici[i] << " ";
    }
    if (c == 3)
    {
        sort(v_aux_1 + 1, v_aux_1 + n + 1);
        for (int i = 1; i <= n; i++)
        {
            v_aux_2[v_aux_1[i]] = i;
        }
        for (int i = 1; i <= n; i++)
            out << v_aux_2[v[i]] << " ";
    }
}