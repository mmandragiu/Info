#include <fstream>
using namespace std;
ifstream in("spirala2.in");
ofstream out("spirala2.out");
int p, k, n, a[501][501];

int ok(int i, int j)
{
    return i <= n && i >= 1 && j <= n && j >= 1;
}

int main()
{
    in >> p >> n >> k;
    int l = n * n;
    int i = 1, j = 1, cnt = 1;
    while (l)
    {
        while (a[i][j] == 0 && l && ok(i, j))
        {
            a[i][j] = cnt;
            j++;
            cnt++;  
            l--;
        }
        j--;
        i++;
        while (a[i][j] == 0 && l && ok(i, j))
        {
            a[i][j] = cnt;
            i++;
            cnt++;
            l--;
        }
        i--;
        j--;
        while (a[i][j] == 0 && l && ok(i, j))
        {
            a[i][j] = cnt;
            j--;
            cnt++;
            l--;
        }
        j++;
        lin--;
        while (a[i][j] == 0 && l && ok(i, j))
        {
            a[i][j] = cnt;
            i--;
            cnt++;
            l--;
        }
        j++;
        i++;
    }
    if (p == 1)
    {
        long long s = 0;
        for (int i = 1; i <= n; i++)
            if (i != k)
                s = s + (a[i][k] % 100003) + (a[k][i] % 100003);
        out << s % 100003;
    }
    else
    {
        if (p == 2)
        {
            for (int i = 1; i <= n; i++)
                swap(a[i][k], a[k][i]);
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++)
                    out << a[i][j] << " ";
                out << '\n';
            }
        }
    }
    return 0;
}