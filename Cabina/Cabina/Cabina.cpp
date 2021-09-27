#include <fstream>
using namespace std;
ifstream in("cabina.in");
ofstream out("cabina.out");

int main()
{
    int n, a, b,persoane=0,consum=0,x,y,urcare=0,speciale=0,coborare=0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a >> b;
        if (i != n)
            persoane += b;
        if (i >= 2)
        {
            if (a > x)
                consum = consum + (a - x) * 3;
            else
                consum = consum + (x - a) * 1;
            if (a > x)
                urcare = 1;
            if (a < x)
                coborare = 1;
            if (a < x and urcare == 1)
            {
                speciale++;
                urcare = 0;
            }
            if (a > x and coborare == 1)
            {
                speciale++;
                coborare = 0;
            }
        }
        x = a;
        y = b;
    }
    out << persoane << '\n' << consum<<'\n'<<speciale;
    return 0;
}