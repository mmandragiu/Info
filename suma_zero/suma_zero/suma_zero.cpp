#include <fstream>
#include <unordered_map>
using namespace std;

long long n, a[10005], s, sol, i, j;

int main()
{
    ifstream in("sumazero.in");
    ofstream out("sumazero.out");
    in >> n;
    for (i = 1; i <= n; i++)
        in >> a[i];
    for (i = 1; i <= n - 3; i++)
    {
        s = 0 - a[i];
        unordered_map<long long, long long> myMap;
        myMap[a[i + 1]]++;
        for (int j = i + 2; j <= n; j++)
        {
            sol += myMap[s - a[j]];
            myMap[a[j]]++;
        }
    }
    out << sol;
    return 0;
}