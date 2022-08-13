#include <fstream>
using namespace std;

int main()
{
    ifstream in("vanatoare.in");
    ofstream out("vanatoare.out");
    int ka, kb, ra = 0, rb = 0, fibo = 1, a = 0, b = 1;
    in >> ka >> kb;
    while (ra < ka && rb < kb)
    {
        fibo = a + b;
        a = b;
        b = fibo;
        ra += (fibo + 1) / 2;
        rb += (fibo - 1) / 2;
        for (int i = 1; i <= fibo; i++)
        {
            if (i % 2 == 1)
                out << "A ";
            else
                out << "N ";
        }
        out << endl;
    }
    return 0;
}