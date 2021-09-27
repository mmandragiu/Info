#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    ifstream in("pozitie.in");
    ofstream out("pozitie.out");
    int n, v[10001], copiev[10001];
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        copiev[i] = v[i];
    }
    sort(v+1,v+n+1);
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == copiev[1])
        {
            out << i;
            break;
        }
    }
    return 0;
}