#include <fstream>
#include <cmath>
#include <bitset>
using namespace std;

bitset<1000102> eratostene;
long long oper_min, oper_min2, n, k, nr_min, dist[100005], s[100005], x;

int main()
{
    ifstream in("secvp.in");
    ofstream out("secvp.out");
    eratostene[0] = 1, eratostene[1] = 1;
    for (int i = 2; i < sqrt(1000101); i++)
    {
        if (eratostene[i] == 0)
            for (int j = 2; j <= 1000101 / i; j++)
                eratostene[i * j] = 1;
    }
    in >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        long long distanta = 0, dist_o = -1, dist_p = -1;;
        if (eratostene[x] == 0)
        {
            oper_min += 0;
            dist[i] = distanta;
            s[i] = s[i - 1] + dist[i];
            continue;
        }
        else
        {
            int o = x - 1, p = x + 1;
            bool found_o = false, found_p = false;
            while (!found_p)
            {
                if (eratostene[p] == 0)
                {
                    found_p = true;
                    dist_p = p - x;
                    break;
                }
                p++;
            }
            while (!found_o && o > 0)
            {
                if (eratostene[o] == 0)
                {
                    found_o = true;
                    dist_o = x - o;
                    break;
                }
                o--;
            }
            if (dist_o > 0)
                distanta = dist_o < dist_p ? dist_o : dist_p;
            else
                distanta = dist_p;
            oper_min += distanta;
            dist[i] = distanta;
            s[i] = s[i - 1] + dist[i];
        }
    }
    out << oper_min << endl;
    oper_min2 = 1000000000;
    for (int i = k; i <= n; i++)
    {
        long long oper = 0;
        oper = s[i] - s[i - k];
        if (oper < oper_min)
        {
            oper_min = oper;
            nr_min = 1;
        }
        else
        {
            if (oper == oper_min)
                nr_min++;
        }
    }
    out << oper_min << " " << nr_min;
    return 0;
}