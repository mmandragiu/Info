#include <fstream>
using namespace std;
ifstream in("vacantadevara.in");
ofstream out("vacantadevara.out");
int v[10] = { 0 };

int main()
{
    int n, x, cifmax = 0;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> x;
        v[x]++;
        if (x > cifmax)
            cifmax = x;
    }
    if (v[0] != 0)
    {
        for (int i = 1; i <= cifmax; i++)
        {
            if (v[i] != 0)
            {
                out << i;
                v[i]--;
                break;
            }
        }
        for (int i = 0; i <= cifmax; i++)
        {
            for (int i1 = 0; i1 < v[i]; i1++)
                out << i;
        }
    }
    else
    {
        for (int i = 0; i <= cifmax; i++)
            if (v[i] != 0)
                for (int i1 = 0; i1 < v[i]; i1++)
                    out << i;
    }
    return 0;
}