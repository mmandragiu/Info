#include <fstream>
using namespace std;

int n, k, r, p, t, c, poz, predecesor, succesor;

int main()
{
    ifstream in("asort.in");
    ofstream out("asort.out");
    in >> p >> n >> r >> k >> t;
    if (r % 2 == 1)
    {
        if (k % 2 == 1)
            c = (k + r) % n;
        else
            c = (n + k - r) % n;
    }
    else
    {
        if (k % 2 == 1)
            c = (n + k - r) % n;
        else
            c = (k + r) % n;
    }
    if (c == 0)
        c = n;
    if (c < 0)
        c = 0 - c;
    if (p == 1)
        out << c;
    else
    {
        if (t % 2 == 0)
            poz = (n + t - r) % n;
        else
            poz = (t + r) % n;
        if (poz == 0)
            poz = n;
        if (poz - 1 == 0)
        {
            if (r % 2 == 1)
                predecesor = (2 * n - r) % n;
            else
                predecesor = (n + r) % n;
        }
        else
        {
            if (r % 2 == 1)
            {
                if ((poz - 1) % 2 == 0)
                    predecesor = (n + poz - r - 1) % n;
                else
                    predecesor = (r + poz - 1) % n;
            }
            else
            {
                if ((poz - 1) % 2 == 0)
                    predecesor = (poz + r - 1) % n;
                else
                    predecesor = (n + poz - r - 1) % n;
            }
        }
        if (poz + 1 == n + 1)
        {
            if (r % 2 == 1)
                succesor = (r + 1) % n;
            else
                succesor = (n + 1 - r) % n;
        }
        else
        {
            if (r % 2 == 1)
            {
                if ((poz + 1) % 2 == 1)
                    succesor = (r + poz + 1) % n;
                else
                    succesor = (n + poz + 1 - r) % n;
            }
            else
            {
                if ((poz + 1) % 2 == 1)
                    succesor = (n + poz + 1 - r) % n;
                else
                    succesor = (r + poz + 1) % n;
            }
        }
        if (predecesor == 0)
            predecesor = n;
        if (predecesor < 0)
            predecesor = 0 - predecesor;
        if (succesor == 0)
            succesor = n;
        if (succesor < 0)
            succesor = 0 - succesor;
        out << predecesor << " " << succesor;
    }
    in.close();
    out.close();
    return 0;
}