#include <fstream>
using namespace std;
ifstream in("canguri.in");
ofstream out("canguri.out");

int main()
{
    int a1, b1, a2, b2, a3, b3;
    in >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if (b1 > b2 && b1 > b3)
    {
        out << a1 << endl;
        if (800 % b1 == 0)
            out << 800 / b1;
        else
            out << 800 / b1 + 1;
    }
    if (b2 > b1 && b2 > b3)
    {
        out << a2 << endl;
        if (800 % b2 == 0)
            out << 800 / b2;
        else
            out << 800 / b2 + 1;
    }
    if (b3 > b1 && b3 > b2)
    {
        out << a3 << endl;
        if (800 % b3 == 0)
            out << 800 / b3;
        else
            out << 800 / b3 + 1;
    }
    return 0;
}