#include <fstream>
using namespace std;

ifstream in("cifreord1.in");
ofstream out("cifreord1.out");

int main()
{
    int x, f[10] = { 0 }, c = 0;
    while (in >> x)
    {
        do
        {
            f[x % 10]++;
            x /= 10;
        } while (x);
    }
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < f[i]; j++)
        {
            if (c < 20)
            {
                out << i << " ";
                c++;
            }
            else
            {
                out << '\n' << i << " ";
                c = 1;
            }
        }
    }
    return 0;
}