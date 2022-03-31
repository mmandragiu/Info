#include <fstream>
using namespace std;

int x, y, z;

int main()
{
    ifstream in("xyz.in");
    ofstream out("xyz.out");
    in >> x >> y >> z;
    out << y;
    for (int i = 1; i <= x - 1; i++)
        out << z;
}