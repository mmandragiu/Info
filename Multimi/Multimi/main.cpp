#include <fstream>
using namespace std;
ifstream in("multimi.in");
ofstream out("multimi.out");

int main()
{
    unsigned short int n, a, b, Min = 30001, Max = 0,multimeavida=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a >> b;
        if (a > Max)
        {
            Max = a;
        }
        if (b < Min)
        {
            Min = b;
        }
        if (Max > b)
        {
            multimeavida = 1;
        }
    }
    if (multimeavida == 1)
    {
        out << "multimea vida";
    }
    else
        for (int i = Max; i <= Min; i++)
        {
            out << i << " ";
        }
    return 0;
}
