#include <fstream>
using namespace std;

ifstream in("pareimpare.in");
ofstream out("pareimpare.out");

int main()
{
    int x, f[100] = { 0 };
    while (in >> x)
        f[x]++;
    for (int i = 1; i <= 99; i += 2)
        if (f[i] != 0)
            out << i << " ";
    out << endl;
    for (int i = 98; i >= 0; i -= 2)
        if (f[i] != 0)
            out << i << " ";
    return 0;
}
