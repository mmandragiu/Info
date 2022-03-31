#include <fstream>
using namespace std;

ifstream cin("platou2.in");
ofstream cout("platou2.out");

int main()
{
    int v[10000], n, l = 1, lmax = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            l++;
        }
        else
        {
            if (l > lmax) {
                lmax = l;
            }
            l = 1;
        }
    }
    cout << lmax;
}