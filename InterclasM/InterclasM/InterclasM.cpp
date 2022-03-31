#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("interclasm.in");
ofstream out("interclasm.out");

int a[100001], b[100001], fara_b[100001], fara_a[100001], m, n, x, k, k1, multiplii[100001],y;

int main()
{
    in >> x >> n;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    in >> m;
    for (int i = 1; i <= m; i++)
        in >> b[i];
    bool diferit = true;
    for (int i = 1; i <= n; i++) {
        diferit = true;
        for (int j = 1; diferit && j <= m; j++) {
            if (a[i] == b[j]) {
                diferit = false;
            }
        }
        if (diferit == true)
            fara_b[++k] = a[i];
    }
    for (int i = 1; i <= m; i++) {
        diferit = true;
        for (int j = 1; diferit && j <= n; j++) {
            if (b[i] == a[j]) {
                diferit = false;
            }
        }
        if (diferit == true)
            fara_a[++k1] = b[i];
    }
    for (int i = 1; i <= k; i++)
        if (fara_b[i] % x == 0)
            multiplii[++y] = fara_b[i];
    for (int i = 1; i <= k1; i++)
        if (fara_a[i] % x == 0)
            multiplii[++y] = fara_a[i];
    sort(multiplii + 1, multiplii + y + 1);
    for (int i = 1; i <= y; i++)
        out << multiplii[i] << " ";
    return 0;
}
