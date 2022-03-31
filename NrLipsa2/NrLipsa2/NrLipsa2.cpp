#include <fstream>
using namespace std;

ifstream in("nrlipsa2.in");
ofstream out("nrlipsa2.out");

int main()
{
    int x, f_nr_negative[100] = { 0 }, f_nr_pozitive[101] = { 0 }, k = -1000000000;
    bool found = false;
    while (in >> x)
    {
        if (x < 0 && x >= -100)
            f_nr_negative[x + 100]++;
        else
            if (x <= 100)
                f_nr_pozitive[x]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (f_nr_negative[i] == 0)
        {
            k = i - 100;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        for (int i = 0; i <= 100; i++)
        {
            if (f_nr_pozitive[i] == 0)
            {
                k = i;
                found = true;
                break;
            }
        }
        if (found == true)
            out << k;
        else
            out << "nu exista";
    }
    else
    {
        out << k;
    }
    return 0;
}