#include <fstream>
using namespace std;

const int NMAX = 1000;
int vn[NMAX + 1], vm[NMAX + 1], n, m, cnt, s;

int main()
{
    ifstream in("arme.in");
    ofstream out("arme.out");
    cnt = 1;
    in >> n >> m;
    for (int i = 1; i <= n; i++)
        in >> vn[i];
    for (int i = 1; i <= m; i++)
        in >> vm[i];
    // select sort
    for (int i = 1; i < n; i++) {
        int index_min = i;
        for (int j = i; j <= n; j++) {
            if (vn[index_min] > vn[j]) {
                index_min = j;
            }
        }
        swap(vn[index_min], vn[i]);
    }
    for (int i = 1; i < m; i++) {
        int index_min = i;
        for (int j = i; j <= m; j++) {
            if (vm[index_min] > vm[j]) {
                index_min = j;
            }
        }
        swap(vm[index_min], vm[i]);
    }
    cnt = m;
    for (int i = 1; i <= n; i++) {
        if (s-vn[i]+vm[cnt]>s)
        {
            swap(vn[i], vm[cnt]);
            cnt--;
        }
    }
    for (int i = 1; i <= n; i++)
        s += vn[i];
    out << s;
    return 0;
}