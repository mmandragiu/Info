#include <fstream>
using namespace std;
ifstream in("numere8.in");
ofstream out("numere8.out");

int main()
{
    int frec[10000] = { 0 }, x;
    while (in >> x)
        frec[x] = 1;
    for (int i = 9999; i >= 1; i--)
        if (frec[i] == 0)
            out << i << " ";
    return 0;
}