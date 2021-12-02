#include <fstream>
using namespace std;

ifstream in("intervale5.in");
ofstream out("intervale5.out");

int frec[101];

int main()
{
    int k, x, y, i, j, max = -1;
    bool found = false;
    while (in >> k)
    {
        frec[k] = 1;
        if (k > max)
            max = k;
    }
    for (i = 0; i <= 100; i++)
    {
        if (frec[i] == 1)
        {
            x = i;
            break;
        }
    }
    for (i = x + 1; i <= max; i++)
    {
        while (frec[i] == 0)
            i++;
        y = i;
        if (y - x >= 2)
        {
            out << x << " " << y << '\n';
            found = true;
        }
        x = y;
    }
    if (found == false)
        out << "nu exista";
    return 0;
}