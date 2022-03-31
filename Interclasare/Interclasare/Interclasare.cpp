#include <fstream>

using namespace std;

ifstream in("interclasare.in");
ofstream out("interclasare.out");

int A[100000], B[100000], C[200000], n, m, x, y, k, val = 0;

int main()
{
    in >> n;
    for (int i = 0; i < n; i++)
        in >> A[i];
    in >> m;
    for (int j = 0; j < m; j++)
        in >> B[j];
    while (x <= n - 1 && y <= m - 1)
    {
        if (A[x] <= B[y])
        {
            k++;
            C[k] = A[x];
            x++;
        }
        else {
            k++;
            C[k] = B[y];
            y++;
        }
    }
    if (x <= n - 1)
    {
        while (x <= n - 1)
        {
            k++;
            C[k] = A[x];
            x++;
        }
    }
    if (y <= m - 1)
    {
        while (y <= m - 1)
        {
            k++;
            C[k] = B[y];
            y++;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        if (val < 10)
        {
            out << C[i] << " ";
            val++;
        }
        else
        {
            out << '\n' << C[i] << " ";
            val = 1;
        }
    }
    return 0;
}