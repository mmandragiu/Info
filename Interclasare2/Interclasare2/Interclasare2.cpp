#include <fstream>
using namespace std;

ifstream in("interclasare2.in");
ofstream out("interclasare2.out");

int a[100001], b[100001], c[200002], n, m;

int main()
{
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    in >> m;
    for (int i = 1; i <= m; i++)
        in >> b[i];
    int i = 1, j = 1, k = 1;
    while (i <= n && j <= m)
    {
        if (a[i] == b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            if (a[i] < b[j])
                i++;
            else
                j++;
        }
    }
    for (int i = 1; i < k; i++)
    {
        out << c[i] << " ";
        if (i % 10 == 0)
            out << endl;
    }
    return 0;
}