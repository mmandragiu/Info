#include <fstream>
using namespace std;

ifstream in("progresie3.in");
ofstream out("progresie3.out");

int f[1001], n, x, r = -10000, prev_nr = -1, nr_ajut = 0, v = 0, nr = 0;
bool found = false;

int main()
{
    while (in >> x)
        f[x] = 1;
    for (int i = 0; i <= 1000; i++)
    {
        if (f[i] == 1 && v == 1)
        {
            if (i - prev_nr == r + 1)
            {
                found = true;
                prev_nr = i;
            }
            else
            {
                found = false;
                break;
            }
        }
        if (f[i] == 1 && v==0)
        {
            int j = i + 1;
            v = 1;
            while (f[j] != 1)
            {
                nr++;
                if (f[j + 1] == 1)
                {
                    break;
                }
                j++;
            }
            r = nr;
            prev_nr = i;
        }
    }
    if (r != -10000 && found == true)
        out << r + 1;
    else
        out << "NU";
    return 0;
}