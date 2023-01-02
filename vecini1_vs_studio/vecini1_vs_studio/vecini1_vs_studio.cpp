// vecini1_vs_studio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
using namespace std;

int main()
{
    ifstream in("vecini1.in");
    ofstream out("vecini1.out");
    int n, m, a[105][105], nr = 0, v1, v2, v3, v4;
    in >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            in >> a[i][j];
    }//in urmatoarele 4 for-uri voi atribui valori aleatorii diferite pe coloanele si liniile 0, pentru a putea lucra mai usor cu vecinii numerelor
    for (int i = 0; i <= m + 1; i++)
        a[0][i] = i + 100001;
    for (int i = 0; i <= m + 1; i++)
        a[n + 1][i] = n + 1 + i + 100001;
    for (int i = 0; i <= n + 1; i++)
        a[i][0] = 2 * i + 100001;
    for (int i = 0; i <= n + 1; i++)
        a[i][m + 1] = 2 * i + 100001 + m + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            v1 = a[i - 1][j], v2 = a[i][j + 1], v3 = a[i + 1][j], v4 = a[i][j - 1];
            if ((v1 != v2) && (v1 != v3) && (v1 != v4) && (v2 != v3) && (v2 != v4) && (v3 != v4))
                nr++;
        }
    }
    out << nr;
}