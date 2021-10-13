#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("halfsort.in");
ofstream out("halfsort.out");


int main()
{
    int n, v[101] = { 0 };
    in >> n;
    for (int i = 0; i < n; i++)
        in >> v[i];
    sort(v, v + n / 2);
    for (int i = n / 2; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        out << v[i]<<" ";
    return 0;
}