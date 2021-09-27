#include <fstream>
using namespace std;

int main()
{
    ifstream in("restmare.in");
    ofstream out("restmare.out");
    int m, restmare = -1, sumresturi = 0,i,i2;
    in >> m;
    for (i = 1; i <= m; i++)
    {
        for (i2 = 1; i2 <= i; i2++)
        {
            int rest = i % i2;
            if (rest > restmare)
                restmare = rest;
        }
        sumresturi = sumresturi + restmare;
        restmare = -1;
    }
    out << sumresturi;
    return 0;   
}