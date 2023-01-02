#include <fstream>
#include <unordered_map>
using namespace std;

const int Nmax = 105;
int n, s, a[Nmax];

struct Triplet {
    int x, y, z;
};

Triplet A;

unordered_map<int, Triplet> sume;//va contine n^3 elemente(=1000000)

int main()
{
    ifstream in("loto.in");
    ofstream out("loto.out");
    in >> n >> s;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                sume[a[i] + a[j] + a[k]] = { a[i], a[j], a[k] };
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                int sumleft = s - a[i] - a[j] - a[k];
                if (sume.count(sumleft) > 0) {
                    Triplet t = sume[sumleft];
                    out << a[i] << " " << a[j] << " " << a[k] << " " << t.x << " " << t.y << " " << t.z;
                    return 0;
                }
            }
        }
    }
    out << -1;
    return 0;
}