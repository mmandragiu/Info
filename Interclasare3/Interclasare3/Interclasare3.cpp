#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("interclasare3.in");
ofstream out("interclasare3.out");

int a[100001], b[100001], c[200001], n, m;

int main()
{
    in >> n >> m;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i <= m; i++)
        in >> b[i];
    sort(b + 1, b + m + 1);
    int i = 1, j = 1, k = 1;
    while (i <= n && j <= m)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] < b[j])
                c[k++] = a[i++];
        }
        else
        {
            i++;
            continue;
        }
        if (b[j] % 2 == 0)
        {
            if (a[i] >= b[j])
                c[k++] = b[j++];
        }
        else
        {
            j++;
            continue;
        }
    }
    while (i <= n)
    {
        if (a[i] % 2 == 0)
            c[k++] = a[i++];
        else
            i++;
    }
    while (j <= m)
    {
        if (b[j] % 2 == 0)
            c[k++] = b[j++];
        else
            j++;
    }
    for (int i = 1; i < k; i++)
    {
        out << c[i] << " ";
        if (i % 20 == 0)
            out << '\n';
    }
    return 0;
}