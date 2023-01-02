#include <fstream>
using namespace std;

int main()
{
    ifstream in("partitii.in");
    ofstream out("partitii.out");
    int n, d, j = 2, nr = 0, sol[300001] = { 0 }, nr = 0, a[300001];
    in >> n >> d;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (!sol[i])
            sol[i]=++nr;
    }
}