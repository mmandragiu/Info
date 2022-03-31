#include <fstream>
using namespace std;
unsigned long long a, produs, n;

int main()
{
    ifstream in("factoriale.in");
    ofstream out("factoriale.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a;
        produs = 1;
        int contor = 0;
        while (contor < a)
        {
            contor++;
            produs = (produs * contor) % 2147483647;
        }
        out << produs << " ";
    }
    return 0;
}