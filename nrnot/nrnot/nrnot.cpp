#include <fstream>
using namespace std;
ifstream in("nrnot.in");
ofstream out("nrnot.out");

int main()
{
    int n, nrdif = 0, x, nr_prev, i = 0;
    in >> n;
    while(in>>x)
    {
        if (i == 0)
        {
            nr_prev = x;
            nrdif++;
        }
        else
        {
            if (x != nr_prev)
                nrdif++;
        }
        nr_prev = x;
        i++;
    }
    out << n - nrdif;
    in.close();
    out.close();
    return 0;
}