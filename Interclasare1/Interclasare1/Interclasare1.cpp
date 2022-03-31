#include <fstream>
using namespace std;

ifstream in("interclasare1.in");
ofstream out("interclasare1.out");

int a[100001], b[100001], c[200001], n, m, i, j, k;

int main()
{
    i = 1, j = 1, k = 1;
    in >> n;
    for (int x = 1; x <= n; x++)
        in >> a[x];
    in >> m;
    for (int y = 1; y <= m; y++)
        in >> b[y];
    while (i <= n && j <= m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        if (a[i] > b[j])
            c[k++] = b[j++];
        else
            i++;
    }
    if (i <= n)
    {
        while (i <= n)
            c[k++] = a[i++];
    }
    if (j <= m)
    {
        while (j <= m)
            c[k++] = b[j++];
    }
    for (int x = 1; x < k; x++)
    {
        out << c[x] << " ";
        if (x % 10 == 0)
            out << endl;
    }
    return 0;
}