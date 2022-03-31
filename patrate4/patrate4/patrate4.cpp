#include <fstream>
using namespace std;

long long c, m, n, t, s, celmaimic, celmaimare, k, s1;

int main()
{
    ifstream in("patrate4.in");
    ofstream out("patrate4.out");
    in >> c;
    if (c == 1)
    {
        in >> m;
        out << m * 8;
    }
    else
    {
        in >> n;
        bool found = false;
        k = 0;
        while (!found)
        {
            t++;
            k += 8;
            celmaimic = celmaimare + 1;
            celmaimare = celmaimic + k - 1;
            if (n >= celmaimic && n <= celmaimare)
                found = true;
        }
        out << t;
    }
    return 0;
}