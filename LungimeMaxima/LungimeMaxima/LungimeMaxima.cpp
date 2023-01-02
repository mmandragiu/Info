#include <fstream>
#include <cstring>
using namespace std;

char c[255], prop_lg_max[255];

int main()
{
    ifstream in("lgmax.in");
    ofstream out("lgmax.out");
    int lg_max = 0, nr_prop;
    in >> nr_prop;
    for (int i = 0; i < nr_prop; i++)
    {
        in.getline(c, 255);
        if (strlen(c) >= strlen(prop_lg_max))
            strcpy_s(prop_lg_max, c);
    }
    out << prop_lg_max;
    return 0;
}