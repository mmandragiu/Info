#include <fstream>
using namespace std;

ifstream in("cifreord.in");
ofstream out("cifreord.out");

int main()
{
    int n, x, f[10] = { 0 }, nr = 0;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        f[x]++;
    }
    for (int i = 0; i < 10; i++)
        if (f[i] != 0)
        {
            for (int j = 0; j < f[i]; j++)
            {
                if (nr == 20)
                {
                    nr = 0;
                    out << endl;
                }
                out << i << " ";
                nr++;
            }
        }
    return 0;
}